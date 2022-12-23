#include <iostream>
#include <Windows.h>
#include "Data.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	int x, y;
	try {
		cout << "Введите число от 1 до 3" << endl;
		cin >> x;
		if (x > 3 || x < 1) throw "Некорректное значение";
		if (x == 1) cout << "Один" << endl;
		else if (x == 2) cout << "Два" << endl;
		else if (x == 3) cout << "Три" << endl;
	}
	catch (const char* msg) {
		cout << msg << "\n";
	}

	cout << "Введите год своего рождения" << endl;
	cin >> y;
	try {
		Data year1(y);
		if (y < 1850) throw std::exception("Что-то не верится");
		else if (y > 2022) throw std::range_error("Вы еще не родились");
		else if (y < 0) throw std::logic_error("Вы ввели отрицательное число");
		else  cout << "Спасибо!";
	}
	catch (std::exception err) {
		cout << "exception: " << err.what();
	}
	catch (std::range_error err) {
		cout << "range error: " << err.what();
	}
	catch (std::logic_error err) {
		cout << "logic error: " << err.what();
	}
}