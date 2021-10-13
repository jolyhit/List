#pragma once
#include "product.h"

#ifndef NODE_H
#define NODE_H

struct Node {
	Node* next;
	Node* prev;

	Product value;

	Node() {
		next = nullptr;
		prev = nullptr;
	}

	Node(Product& product) {
		next = nullptr;
		prev = nullptr;
		value = product;
	}
};
#endif 