#include <iostream>
#include <Windows.h>
#include <string>
#include <regex>
#define _USE_MATH_DEFINES
#include <math.h>
#include <fstream>
#include <vector>
#include "Settings.h"
#include <map>
using namespace std;

bool HaveNum(string str)
{
    regex reg("[0-9]+");
    return regex_search(str, reg);
}

void print(vector<int> v)
{
    for (int n : v) std::cout << n << " ";
    cout << "\n-------------\n";
}

bool isValidEmail(string email) {

    std::regex reg("^[a-z0-9_][a-z0-9_\.-]*[a-z0-9_]@([a-z0-9]+[a-z0-9_-]*[a-z0-9]\.)+[a-z0-9]{2,}$", std::regex_constants::icase);

    return std::regex_search(email, reg);

}

void print(string s)
{
    cout << s << "\n";
}

int main()
{
    setlocale(LC_ALL, "");
    //7_1
    cout << "Введите строку" << endl;
    string s1, name, stock, email, str2;
    int index = -1, r;
    cin >> s1;  
    print(s1);
    print(s1.substr(1, 3));
    index = s1.find("a");
    if (index == -1) { cout << "Символа не найдено" << endl; }
    else print(to_string(index));
    //7_2
    cout << "Введите имя" << endl;
    cin >> name;
    if (name.size() >= 2 && name.size() <= 32 && name[0] == toupper(name[0]) && !(HaveNum(name))) cout << "Отлично" << endl;
    else cout << "Имя неккоректно" << endl;
    stock = "Здесь могла бы быть ваша реклама, но есть e-mail danl@mail.ru and ffkjs200@mail.com";
    smatch matches;
    regex reg("[a-z0-9_\.-]*[a-z0-9_]@([a-z0-9]+[a-z0-9_-]*[a-z0-9]\.)+[a-z0-9]{2,}");
    while (regex_search(stock, matches, reg))
    {
        cout << "email из переменной: " << matches[0] << endl;
        stock = matches.suffix().str();
    }
    //7_3
    cout << "Введите радиус";
    double ro;
    cin >> r;
    ro = 2 * M_PI * r;
    cout << "Радиус окружности: " << ro << endl;
    double rd = trunc(ro * 1000 + 0.5) / 1000;
    cout << "Округленный радиус:" << rd << "\n";
    fstream fs;
    fs.open("string.txt", ios::out);
    for (;;) {
        cout << "Введите произвольную строку";
        cin >> str2;
        if (str2 != "read") fs << str2;
        if (str2 == "read") {
            fs.close();
            fs.open("string.txt", ios::in);
            string str;
            fs >> str;
            cout << str << "\n";
            fs.close();
            fs.open("string.txt", ios::out);
        }
        if (str2 == "erase") {
            fs.close();
            fs.open("string.txt", ios::out);
        };
        if (str2 == "exit") break;
    }
    //7_4
    vector<int> v1;
    v1.push_back(7);
    v1.push_back(5);
    v1.push_back(9);
    v1.push_back(2);
    v1.push_back(8);
    cout << "Вектор: ";
    print(v1);
    cout << "Добавляем элемент между 3 и 4" << endl;
    auto i = v1.begin();
    i++;
    v1.insert(i+2, 11);
    print(v1);
    v1.pop_back();
    print(v1);
    cout << endl;
    Settings map1("Zxcv", 40);
    map1.Add("Lin", 11);
    map1.Get("Lin");
    map1.print();
}