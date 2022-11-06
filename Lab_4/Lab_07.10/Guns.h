#pragma once
#include <iostream>
using namespace std;
class Guns {
public:
	string name;
	int damage;
	int weight;

	Guns(string name, int damage, int weight);
	Guns();

	~Guns() {
		cout << "Object " << name << " " << damage << " " << weight << " removed \n";
	}
	int GetWeight(int max);
	void newWeight(Guns sword, int wei);
	void newWeight(int wei);
};