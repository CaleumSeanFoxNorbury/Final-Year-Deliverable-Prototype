#include "LoginMenu.h"

LoginMenu::LoginMenu(const std::string& title, Application* app) : Menu(title, app)
{
	DisplayMenu();
}

void LoginMenu::OutputMenuOptions()
{
	for (int i(0); i < app->GetLength(); i++) {
		ui.Option((i + 1), app->GetUser(i)->GetName());
	}
}

bool LoginMenu::HandleMenuOption(char choice)
{
	int user = choice;

	if (user >= 0 && user <= app->GetLength()) {
		std::string UsersName = app->GetUser(--user)->GetName();
		std::string password = ui.Question("Enter password for " + UsersName);
		if (password == app->GetUser(user)->GetPassword()) {
			app->LogIn(app->GetUser(user));
		}
	}
	return false;
}


