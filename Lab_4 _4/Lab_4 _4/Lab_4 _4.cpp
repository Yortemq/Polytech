#include "string"
#include <iostream>
#include "Guns.h"
#include "Characteristic.h"
#include "MyMath.h"
using namespace std;
int MyMath::counter = 0;

int main()
{
	setlocale(LC_ALL, "Russian");
	Guns sword("Sword", 7, 20);
	/*cout << sword.name << " " << sword.damage << " " << sword.weight << endl;
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
	delete pistoll;*/
	
	cout << sword.getName() << "\n";
	cout << sword.getDamage() << "\n";
	cout << sword.getWeight() << "\n";
	sword.setnewDamage(13);
	std::cout << sword.getDamage() << "\n";
	Characteristic cannon(12);
	cannon.GetDamage(&sword);
	MyMath m1(2,3);
    cout << "Add =" << m1.Add(10, 23) << endl;
    cout << "Sub =" << m1.Sub(11, 4) << endl;
    cout << "Mult = " << m1.Mult(7, 8) << endl;
    cout << "Div = " << m1.Div(121, 11) << endl;
    cout << MyMath::counter << " - Счетчик";
}