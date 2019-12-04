#pragma once
#include<string>

#include"UserInterface.h"
#include"Menu.h"
#include"Application.h"

class MainMenu : public Menu {
public:
	MainMenu(const std::string&, Application*);
	void OutputMenuOptions() final;
	bool HandleMenuOption(char) final;
};