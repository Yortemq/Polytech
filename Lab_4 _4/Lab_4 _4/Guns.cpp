#include "Guns.h"

Guns::Guns(string name, int damage, int weight)
{
	this->name = name;
	this->damage = damage;
	this->weight = weight;
}

//Guns::Guns():Guns(name, damage, weight){}

/*int Guns::GetWeight(int max) {
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
*/

string Guns::getName()
{
	return name;
}

int Guns::getDamage()
{
	return damage;
}

int Guns::getWeight()
{
	return weight;
}

void Guns::setnewDamage(int damage) {
	if (damage > this->damage) { 
		this->damage = damage;
		cout << "Damage increased" << "\n"; }
	else { cout << "Find something better" << "\n"; }

}