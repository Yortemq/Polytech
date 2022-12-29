#pragma once
#ifndef NODE
#define NODE
class Node {
public:
	Node* left, * right, * parent;//Указатели
	int balance, height, key;
};
#endif