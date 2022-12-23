#include "Settings.h"
#include <iostream>
using namespace std;

Settings::Settings(string key, int number)
{
	this->key = key;
	this->number = number;
}
void Settings::Add(string key, int number) {
	static map<string, int> map{ {"Zxcv", 40}, {"Lin", 11} };
	map.insert(pair<string, int>(key, number));
}
void Settings::Get(string key) {
	if (key == "Zxcv") {
		cout << "Zxcv = " << key << endl;
	}
}
void Settings::print() {
	static map<string, int> map{ {"Zxcv", 40}, {"Lin", 11} };
	for (auto i = map.begin(); i != map.end(); i++) {
		std::cout << i->first << " = " << i->second << "\n";
	}
}
