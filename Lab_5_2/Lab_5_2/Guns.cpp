#include "Guns.h"
#include "string"
using namespace std;

void Guns::gun(Direction d)
{
    if (d == Direction::ONEHANDED) std::cout << "Одноручное";
    else if (d == Direction::TWOHANDED) std::cout << "Двуручное";
    else if (d == Direction::BOW) std::cout << "Лук";
    else if (d == Direction::CROSSBOW) std::cout << "Арбалет";
    std::cout << "\n";
}

void Guns::takeDamage() {}
int Guns::com() { return damage; }
void Guns::compr(int x1, int x2, int x3) {}