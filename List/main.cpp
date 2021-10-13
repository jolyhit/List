#include <iostream>
#include "list.h"

int main() {
    setlocale(LC_ALL, "ru");

    List list(new Product("Яблоко зеленое", 199));

    list.Append(new Product("Дыня", 249));
    list.Append(new Product("Банан", 89));
    list.Prepend(new Product("Арбуз", 49));
    list.InsertAfter(new Product("Груша", 199), 1);
    list.Append(new Product("Огурец", 69));
    list.InsertBefore(new Product("Киви", 189), 2);

    list.Print();

    return 0;
}