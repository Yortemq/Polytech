#pragma once
#ifndef TREE
#define TREE
#include <iostream>
#include <iomanip>
#include "Node.h"
class Tree {
public:
	void virtual Insert(int key) = 0;
	void virtual Find_node(Node*& node, int key) = 0;
	void virtual Delete(Node* node, int key) = 0;
	void virtual Search(Node* node, int key) = 0;
};
#endif