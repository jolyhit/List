#pragma once
#include "node.h"
using namespace std;

#ifndef LIST_H
#define LIST_H

struct List {
private:
	Node* root;
	Node* last;
	size_t size;

public:
	List() {
		root = last = nullptr;
		size = 0;
	}

	List(Product* product) {
		root = new Node(*product);
		last = root;
		size = 0;
	}

	void Append(Product* value) {
		Node* pTemp = new Node(*value);
		last->next = pTemp;
		last = pTemp;
	}

	void Prepend(Product* value) {
		Node* pTemp = root;
		root = new Node(*value);
		root->next = pTemp;
	}

	void InsertBefore(Product* value, int index) {
		if (index <= 0) {
			Node* pTemp = new Node(*value);
			pTemp->next = root;
			root = pTemp;
		}
		else {
			Node* pRoot = GetNode(index);
			Node* pPrev = GetNode(index - 1);
			Node* pTemp = new Node(*value);
			pPrev->next = pTemp;
			pTemp->next = pRoot;
		}
	}

	void InsertAfter(Product* value, int index) {
		if (index < 0) {
			Node* pTemp = new Node(*value);
			pTemp->next = root;
			root = pTemp;
		}
		else {
			Node* pRoot = GetNode(index);
			Node* pTemp = new Node(*value);
			pTemp->next = pRoot->next;
			pRoot->next = pTemp;
		}
	}

	Node* GetNode(int index) const {
		if (index < 0) 
			return root;
		else {
			Node* pRoot = root;
			index = index - 1;
			for (int i = -1; pRoot != nullptr && index != i; i++)
				pRoot = pRoot->next;
			return pRoot;
		}
	}

	const Product* ToArray() {
		
	}

	void Print() {
		for ( ; root != nullptr; root = root->next)	
			cout << root->value.name << " " << root->value.price << "руб." << endl; 
		getchar();
	}

private:
	bool createFirst(Product* value) {

	}

	static Node* createNode(Product* value) {

	}

	void insert(Product* value, int index) {
		
	}
};
#endif
