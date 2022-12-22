#include "Magic.h"
#include "string"
using namespace std;

Magic::Magic(string name, int damage, int weight, int addDamage):Guns()
{
    this->addDamage = addDamage;
    this->damage = damage;
}

int Magic::getAddDamage() {
    return addDamage;
}

void Magic::magic() {
    cout << "Магический урон = " << addDamage << endl;
}

Magic::Magic():
    Magic("Bow", 5, 3, 12) {
};
  
void Magic::takeDamage()
{
    cout << "Magic Damage = " << addDamage << " " << "FullDamage: " << addDamage + damage << "\n";
}

int Magic::com() {
    return  addDamage + damage;
}

void Magic::compr(int x1, int x2, int x3) {
    if (x1 > x2) { cout << "Sword " <<x1 << x2<<  ">" << " Bow"<< endl; }
    else cout << "Bow " <<   ">" << " Sword" << endl;
    if (x1 > x3) { cout << "Sword " << ">" << " Crossbow" << endl; }
    else cout << "Crossbow " << ">" << " Sword" << endl;
    if (x2 > x3) { cout << "Bow " << ">" << " Crossbow" << endl; }
    else cout << "Crossbow " << ">" << " Bow";
}

void Magic::attack()
{
    cout << "Атакуем магическим оружием" << "\n";
}