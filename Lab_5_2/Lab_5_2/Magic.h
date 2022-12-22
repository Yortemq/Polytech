#pragma once
#include "Guns.h"
#include "string"
using namespace std;

class Magic :
    public Guns
{
private:
    int addDamage;
    int damage;
public:
    Magic(string name, int damage, int weight, int addDamage);
    /*Magic() {};*/
    int getAddDamage();
    void magic();
    Magic();
    void takeDamage() override;
    int com() override;
    void compr(int x1, int x2, int x3) override;
    void attack() override;
};

