#include <iostream>
#include "gameMenu.cpp"



int main() {



	string name;
	cout << "Please enter your name: ";
	cin >> name;
	cout << "\n\n";

	player you(1, name);

	menu(you);
	


	return 0;
}