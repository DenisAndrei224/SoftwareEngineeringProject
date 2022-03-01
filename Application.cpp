#include "Application.h"

void Application::selectOption() {
	int option;
	cout << "Please select an option: ";
	cin >> option;
	this->selectedOption = option;
	cout << "Option selected: " << option << endl;
}

void Application::Menu() {
	do {
		if (flag == -1) {
			cout << "Starting menu: \n";
			cout << "0. Exit \n";
			cout << "1. Configuration \n";
			cout << "2. Operational \n";
			selectOption();
			if (selectedOption == 0) {
				cout << "Exiting... \n";
				flag = 0;
			}
			else if (selectedOption == 1)
				flag = 1;
			else flag = 2;
		}
		if (flag == 1) {
			cout << "Configuration: \n";
			cout << "0. Back \n";
			cout << "1. View family members \n";
			cout << "2. Add family members \n";
			cout << "3. Remove family member \n";
			cout << "4. Monthly spending limit \n";
			selectOption();
			if (selectedOption == 0) flag = -1;
			else {
				if (selectedOption == 1) flag = 11;
				if (selectedOption == 2) flag = 12;
				if (selectedOption == 3) flag = 13;
				if (selectedOption == 4) flag = 14;
			}
		}

	} while (flag != 0);
}