#include "CreateUserMenu.h"

CreateUserMenu::CreateUserMenu(const std::string& title, Application* app): Menu(title, app)
{
	DisplayMenu();
}

void CreateUserMenu::OutputMenuOptions()
{
	ui.Option(1, "Create new user");
	ui.Option(2, "Register new user");
}

bool CreateUserMenu::HandleMenuOption(char choice)
{
	switch (choice) {
	case'1':{
		std::string name = ui.Question("Enter new users name");
		std::string pas = ui.Question("Enter a password for the new user");
		std::string userid = ui.Question("Please pick a username for the system");
		User* newuser = new User(name, pas, userid);
		app->AddNewUser(newuser);
		break;
	}
	case'2': {
		break;
	}
	}
	return false;
}
