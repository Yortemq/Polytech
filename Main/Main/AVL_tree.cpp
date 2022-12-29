#include "AVL_tree.h"
#include <queue>
AVL_tree::AVL_tree(int size) {
	for (int i = 0; i < size; i++) {
		int t;
		std::cin >> t;
		Insert(t);
	}
}
void AVL_tree::Insert(int key) {
	if (!root) {
		root = new Node();
		root->key = key;
		root->height = 1;
		root->balance = 0;
		root->left = nullptr;
		root->right = nullptr;
		root->parent = nullptr;
	}
	else {
		Node* node = new Node();
		node->key = key;
		node->left = nullptr;
		node->right = nullptr;
		Node* reference = root;
		Find_node(reference, key);
		if (reference->key > key)
			reference->left = node;
		else
			reference->right = node;
		node->parent = reference;
		Balance(root, key);
	}
}
void AVL_tree::Find_node(Node*& node, int key) {
		node = node->left;
		Find_node(node, key);
	}
	if (node->key < key && node->right) {
		node = node->right;
		Find_node(node, key);
	}
}
void AVL_tree::Delete(Node* node, int key) {
	if (!node) {
		std::cout << "There is no record with this code\n";
		return;
	}
	if (node->key == key) {
		Node* temp_p;
		if (node->parent) {
			temp_p = node->parent;
			if (!node->left && !node->right)
				if (node->parent->left && node->parent->left->key == node->key)
					node->parent->left = nullptr;
				else
					node->parent->right = nullptr;
			else if (node->left && node->right) {
				if (node->parent->left == node) {
					Node* ref1 = node, * ref2 = node->left;
					node = node->left;
					if (!node->right) {
						ref1->parent->left = node;
						node->right = ref1->right;
						node->right->parent = node;
						node->parent = ref1->parent;
						std::cout << "The record was successfully deleted\n";
						return;
					}
					while (node->right)
						node = node->right;
					ref1->parent->left = node;
					node->parent->right = node->left;
					if (node->left)
						node->left->parent = node->parent;
					node->right = ref1->right;
					if (node->right)
						node->right->parent = node;
					node->left = ref2;
					node->left->parent = node;
					node->parent = ref1->parent;
				}
				else {
					Node* ref1 = node, * ref2 = node->right;
					node = node->right;
					if (!node->left) {
						ref1->parent->right = node;
						node->left = ref1->left;
						node->left->parent = node;
						node->parent = ref1->parent;
						std::cout << "The record was successfully deleted\n";
						return;
					}
					while (node->left)
						node = node->left;
					ref1->parent->right = node;
					node->parent->left = node->right;
					if (node->right)
						node->right->parent = node->parent;
					node->left = ref1->left;
					if (node->left)
						node->left->parent = node;
					node->right = ref2;
					node->right->parent = node;
					node->parent = ref1->parent;
				}
			}
			else
				if (node->left) {
					if (node->parent->left == node)
						node->parent->left = node->left;
					else
						node->parent->right = node->left;
					node->left->parent = node->parent;
				}
				else {
					if (node->parent->left == node)
						node->parent->left = node->right;
					else
						node->parent->right = node->right;
					node->right->parent = node->parent;
				}
		}
		else {
			temp_p = root;
			if (!node->left && !node->right)
				root = nullptr;
			else if (node->left && node->right) {
				Node* ref1 = node, * ref2 = node->right;
				node = node->right;
				if (!node->left) {
					root = node;
					node->left = ref1->left;
					node->left->parent = node;
					node->parent = nullptr;
					std::cout << "The record was successfully deleted\n";
					return;
				}
				while (node->left)
					node = node->left;
				root = node;
				node->parent->left = node->right;
				if (node->right)
					node->right->parent = node->parent;
				node->left = ref1->left;
				if (node->left)
					node->left->parent = node;
				node->right = ref2;
				node->right->parent = node;
				node->parent = nullptr;
			}
			else {
				if (node->left)
					root = node->left;
				else
					root = node->right;
				root->parent = nullptr;
			}
		}
		std::cout << "The record was successfully deleted\n";
		int flag = 0;
		Balance(temp_p, flag);
		while (flag) {
			temp_p = temp_p->parent;
			flag = 0;
			Balance(temp_p, flag);
		}
		return;
	}
	if (node->key > key)
		Delete(node->left, key);
	else
		Delete(node->right, key);
}
void AVL_tree::Balance(Node* node, int& flag) {
	if (!node) {
		return;
	}
	Balance(node->left, flag);
	Balance(node->right, flag);
	if (node->left && node->right) {
		node->height = std::max(node->left->height, node->right->height) + 1;
		node->balance = node->left->height - node->right->height;
	}
	else if (!node->left && !node->right) {
		node->height = 1;
		node->balance = 0;
	}
	else
		if (node->left) {
			node->height = node->left->height + 1;
			node->balance = node->left->height;
		}
		else {
			node->height = node->right->height + 1;
			node->balance = 0 - node->right->height;
		}
	if (node->balance >= 2) {
		Rotater_right(node);
		Balance(node, flag);
		flag = 1;
	}
	else if (node->balance <= -2) {
		Rotater_left(node);
		Balance(node, flag);
		flag = 1;
	}
}
void AVL_tree::Rotater_left(Node*& node) {
	Node* temp = node->right, * br_p = node->parent;
	node->right = temp->left;
	if (temp->left)
		temp->left->parent = node;
	temp->left = node;
	if (node->parent && temp->key > node->parent->key)
		node->parent->right = temp;
	else if (node->parent)
		node->parent->left = temp;
	else
		root = temp;
	temp->parent = br_p;
	temp->left->parent = temp;
}
void AVL_tree::Rotater_right(Node*& node) {
	Node* temp = node->left, * br_p = node->parent;
	node->left = temp->right;
	if (temp->right)
		temp->right->parent = node;
	temp->right = node;
	if (node->parent && temp->key > node->parent->key)
		node->parent->right = temp;
	else if (node->parent)
		node->parent->left = temp;
	else
		root = temp;
	temp->parent = br_p;
	temp->right->parent = temp;
}
void AVL_tree::Search(Node* node, int key) {
	if (!node) {
		std::cout << "Record is not found\n";
		return;
	}
	if (node->key = key) {
		std::cout << "Record found: " << node->key;
		return;
	}
	if (node->key > key)
		Search(node->left, key);
	else
		Search(node->right, key);
}
void AVL_tree::Print(Node* node, int width) {
	if (!node)
		return;
	Print(node->right, width + 1);
	std::cout << std::setw(4 * width) << node->key << "\n";
	Print(node->left, width + 1);
}
void AVL_tree::exits(Node* node) {
	std::queue <Node*> q;
	std::cout << node->key << " ";
	if (node->left)
		q.push(node->left);
	if (node->right)
		q.push(node->right);
	while (!q.empty()) {
		Node* reference = q.front();
		std::cout << reference->key << " ";
		if (reference->left)
			q.push(reference->left);
		if (reference->right)
			q.push(reference->right);
		q.pop();
	}
	std::cout << "\n";
}
