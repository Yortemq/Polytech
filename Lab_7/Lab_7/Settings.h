#pragma once
using namespace std;
#include <iostream>
#include <map>

class Settings
{
public:
	string key;
	int number;
	Settings(string key, int number);
	static void Add(string key, int number);
	static void Get(string key);
	static void print();
};

