#pragma once
#include <iostream>
#include "Guns.h"
using namespace std;

class Characteristic
{
public:
	int strenght;
	Characteristic(int strenght);
	void GetDamage(Guns* sword);
};

