#pragma once
#include <iostream>
using namespace std;

class MyMath
{
public:
	int y;
	int x;
	MyMath(int x, int y);
	static int Add(int x, int y);
	static int Sub(int x, int y);
	static int Mult(int x, int y);
	static int Div(int x, int y);
	static void resetCounter() {
		counter = 0;
	}
	static int counter;
};

