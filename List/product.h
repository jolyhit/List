#pragma once
#include <string>

#ifndef PRODUCT_H
#define PRODUCT_H

struct Product {
	char* name;
	float price;

	Product() {
		this->name = new char[13];
		strcpy(name, "Product name");
		price = 0;
	}

	Product(const char* name, float price) {
		size_t len = strlen(name) + 1;
		this->name = new char[len];
		strcpy(this->name, name);
		this->price = price;
	}
};
#endif 