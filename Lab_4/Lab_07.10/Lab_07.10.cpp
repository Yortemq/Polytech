#include "string"
#include <iostream>
#include "Guns.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	Guns sword("Sword", 7, 20);
	cout << sword.name << " " << sword.damage << " " << sword.weight << endl;
	//Guns spider2; //= Guns("Spider2", 20, 4);
	//cout << spider2.name << " " << spider2.damage << " " << spider2.weight << endl;

	Guns* pistol = new Guns("Pistol", 50, 13);
	Guns* pistoll = new Guns("Pistol2", 50, 13);
	cout << pistol->name << " " << pistol->damage << " " << pistol->weight << endl;
	cout << sword.GetWeight(100) << " Вывод true or False" << endl;
	sword.newWeight(*pistol, 5);
	cout << pistol->weight << " Сумма переданного веса текущего объекта и веса пистолета" << endl;
	sword.newWeight(15);
	cout << sword.weight << " Сумма переданного веса и веса текущего объекта с перегрузкой" << endl;
	cout << sword.weight << " Сумма переданного веса и веса текущего объекта с перегрузкой" << endl;
	delete pistoll;
}

