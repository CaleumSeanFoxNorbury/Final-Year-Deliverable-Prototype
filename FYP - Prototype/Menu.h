#pragma once
#include<iostream>
#include<string>

#include"Application.h"
#include"Utils.h"
#include"UserInterface.h"

class Menu {
public:
	Menu(const std::string&, Application*);

	void DisplayMenu();

	virtual void OutputMenuOptions() = 0;
	virtual bool HandleMenuOption(char) = 0;
	bool readytogoback = false;
protected:
	Application* app;
	UserInterface ui;
	Utils ut;
private:
	std::string _title;
	void Header();
	void Footer();
};