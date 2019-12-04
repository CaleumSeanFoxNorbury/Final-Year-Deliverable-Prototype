#pragma once
#include "Menu.h"
#include "List.h"

#include<vector>
#include<string>

class LoginMenu : public Menu {
public:
	LoginMenu(const std::string& title, Application* app);

	void OutputMenuOptions() final;
	bool HandleMenuOption(char choice) final;
protected:
	LoginMenu* login;
private:
	List<User*> users;
	std::string title;
};