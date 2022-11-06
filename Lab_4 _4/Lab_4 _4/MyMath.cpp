#include "MyMath.h"
#include <iostream>
using namespace std;

MyMath::MyMath(int x, int y) {
	this->x = x;
	this->y = y;
}
int MyMath::Add(int x, int y){ 
	counter++;
	return x + y;
}

int MyMath::Sub(int x, int y){
	counter++;
	return x - y;
}

int MyMath::Mult(int x, int y){
	counter++;
	return x * y;
}

int MyMath::Div(int x, int y){
	counter++;
	return x / y;
}


