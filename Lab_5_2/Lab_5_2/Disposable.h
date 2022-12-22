#pragma once
#include "Guns.h"
class Disposable :
    public Guns
{
public:
    Disposable(string name, int damage, int weight);
    void getFlag(bool flag) { this->flag = flag;}
    void attack() {
        if (flag == true) { cout << "Оружие уже было использовано" << endl; }
        else {
            cout << "Атакуем одноразовым оружием" << endl; 
            flag = true;
        }
    }
private:
    int damage;
    bool flag;
};

