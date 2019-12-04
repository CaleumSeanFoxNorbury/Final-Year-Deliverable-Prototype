#pragma once
#include<string>

#include"UserInterface.h"
#include"Menu.h"
#include"Application.h"
#include"POS.h"

class POS_Menu : public Menu {
public:
	POS_Menu(const std::string&, Application*);
	void OutputMenuOptions() final;
	bool HandleMenuOption(char) final;
private:
	std::string title;
	POS* pos;
};