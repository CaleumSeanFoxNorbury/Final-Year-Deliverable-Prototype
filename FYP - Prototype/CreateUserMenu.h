#pragma once
#include "Menu.h"
#include "List.h"
#include "UserInterface.h"
#include "User.h"

#include<string>

class CreateUserMenu : public Menu {
public:
	CreateUserMenu(const std::string& title, Application* app);

	void OutputMenuOptions() final;
	bool HandleMenuOption(char choice) final;
private:
	std::string title;
};