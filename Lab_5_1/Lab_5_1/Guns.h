#pragma once
#include <iostream>
#include "string"
using namespace std;

enum class Direction {
	ONEHANDED,
	TWOHANDED,
	BOW,
	CROSSBOW
};

class Guns
{
public:
	static void gun(Direction d);
	Direction GetType() { 
		return Type;
	}
	void SetType(Direction Type) {
		this->Type = Type;
	}
	virtual void takeDamage();
	virtual int com();
	virtual void compr(int x1, int x2, int x3);
private:
	Direction Type;
	int damage;
};

