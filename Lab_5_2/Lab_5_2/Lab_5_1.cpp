// Lab_5_1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
#include <iostream>
#include "Guns.h"
#include "Magic.h"
#include "Disposable.h"
#include "Hand.h"
#include "string"
using namespace std;

struct Registration {
    int id;
    string login;
    string password;
};

void printUser(Registration& user) {
    std::cout << "id: " << user.id << "\n";
    std::cout << "Login: " << user.login << "\n";
    std::cout << "Password: " << user.password << "\n";
}

int main()
{
    setlocale(LC_ALL, "ru");
    /*Guns::gun(Direction::ONEHANDED);
    Guns::gun(Direction::TWOHANDED);
    Guns::gun(Direction::BOW);
    Guns::gun(Direction::CROSSBOW);
    Guns gun;
    gun.SetType(Direction::CROSSBOW);
    if (gun.GetType() == Direction::CROSSBOW) {
        cout << "Поздравляем у ваc арбалет" << endl;
    }
    Registration user1;
    user1.id = 001;
    user1.login= "User_01";
    user1.password = "qwerty";
    printUser(user1);*/
    Magic mSword("sword", 7, 9, 15);
    /*Magic mBow("Bow", 5, 3, 12);
    Magic mCrossbow("Crossbow", 10,5, 20);
    mSword.magic();
    mSword.takeDamage();
    mBow.takeDamage();
    int D1 = mSword.com();
    int D2 = mBow.com();
    int D3 = mCrossbow.com();
    mBow.compr(D1, D2, D3);*/

    //Guns *guns = new Guns(); Создание экземпляра абстрактного класса
    Magic *magic= new Magic();
    mSword.attack();
    Disposable sword1("sword", 5, 3);
    sword1.getFlag(false);
    sword1.attack();
    sword1.attack();
    Hand <string> right("Правая рука");
    right.setHand("Левая рука");
    cout << right.getHand() << "\n";
}