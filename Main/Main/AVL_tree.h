#ifndef AVL_TREE
#define AVL_TREE
#include <iostream>
#include <iomanip>
#include "Node.h"
#include "Tree.h"
class AVL_tree : public Tree {
	Node* root = nullptr;
public:
	AVL_tree(int size);
	void Insert(int key);
	void Find_node(Node*& node, int key);
	void Delete(Node* node, int key);
	void Search(Node* node, int key);
	void Print(Node* node, int width = 0);
	void Balance(Node* node, int& flag);
	void Rotater_right(Node*& node);
	void Rotater_left(Node*& node);
	void exits(Node* node);
	Node* Get_root() {
		return root;
	}
};
#endif