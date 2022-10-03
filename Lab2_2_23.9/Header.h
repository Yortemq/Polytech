#include <iostream>
#include <Windows.h>
#define sum(y, y1) (y + y1)
using std::cout;
using std::endl;
int num1(int y, int y1) {
	setlocale(LC_ALL, "");
	static int x = 0;
	x = y;
	cout << "Файл Header.h" << "\n";
	int z = x + y;
	cout << "Сумма заданного числа и стат переменной: " << z << "\n";
	x = y;
	int k = sum(y, y1);
	cout << "Сумма двух переданных: " << k;
	return z, k;
}