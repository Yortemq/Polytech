#pragma once
#include <iostream>
using namespace std;

class Guns {
	friend class Characteristic;

private:
	string name;
	int damage;
	int weight;

public:
	Guns(string name, int damage, int weight);
	Guns();

	/*~Guns() {
		cout << "Object " << name << " " << damage << " " << weight << " removed \n";
	}
	int GetWeight(int max);
	void newWeight(Guns sword, int wei);
	void newWeight(int wei);*/

	string getName();
	int getDamage();
	int getWeight();
	void setnewDamage(int damage);
};