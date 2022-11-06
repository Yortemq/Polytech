#include "Guns.h"

Guns::Guns(string name, int damage, int weight)
{
	this->name = name;
	this->damage = damage;
	this->weight = weight;
}

//Guns::Guns():Guns(name, damage, weight){}

int Guns::GetWeight(int max) {
	if (weight > max) {
		return true;
	}
	else {
		return false;
	}
}

void Guns::newWeight(Guns sword, int wei) {
	sword.weight += wei;
}

void Guns::newWeight(int wei) {
	weight += wei;
}