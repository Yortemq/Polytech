#include "Characteristic.h"
#include <iostream>

Characteristic::Characteristic(int strenght) {
	this->strenght = strenght;
}

void Characteristic::GetDamage(Guns* sword) {
	cout << sword->damage + strenght << " Сумма силы и урона" << "\n";
}
