#pragma once
#include <iostream>
using namespace std;

class Application
{
private:
	int selectedOption;
	int flag;
public:
	
public:
	Application() {
		this->selectedOption = -1;
		this->flag = -1;
	}
	void selectOption();
	void Menu();
};

