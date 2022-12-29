#include <iostream>
#include "AVL_tree.h"

int main() {
	int n, key;
	std::cout << "Enter size\n";
	std::cin >> n;
	std::cout << "Enter numbers\n";
	AVL_tree* tree = new AVL_tree(n);
	tree->Print(tree->Get_root());
	std::cout << "\n";
	tree->exits(tree->Get_root());
	std::string command;
	std::cout << "Choose operation: INSERT, DELETE, SEARCH, PRINT, END.\n";
	std::cin >> command;
	while (command != "END") {
		if (command == "PRINT") {
			system("cls");
			tree->Print(tree->Get_root());
		}
		else {
			std::cout << "Enter the code to record: ";
			std::cin >> key;
			if (command == "DELETE")
				tree->Delete(tree->Get_root(), key);
			else if (command == "SEARCH")
				tree->Search(tree->Get_root(), key);
			else if (command == "INSERT")
				tree->Insert(key);
			else
				std::cout << "The command was entered incorrectly\n";
		}
		std::cout << "Choose operation: INSERT, DELETE, SEARCH, PRINT, END.\n";
		std::cin >> command;
	}
	system("cls");
	std::cout << "Finish of program work";
}
