#include "MainMenu.h"

MainMenu::MainMenu(const std::string& title, Application* app): Menu(title, app)
{
	DisplayMenu();
}

void MainMenu::OutputMenuOptions()
{
	ui.Option(1, "Profile Page");
	ui.Option(2, "Point of sale");
	ui.Option(3, "Settings");
	if (app->IsUserLoggedIn()) {
		ui.Line();
		ui.Option(4, "Logout");
	}
}

bool MainMenu::HandleMenuOption(char choice)
{
	std::string MenuTitle;
	switch (choice) {
	case '1': {
		MenuTitle = "PROFILE PAGE";
		
		break;
	}
	case 2: {
		MenuTitle = "POINT OF SALE";

		break;
	}
	case 4: {
		MenuTitle = "SETTLINGS";
		
		break;
	}
	case '6': {
		MenuTitle = "LOGOUT";

		break;
		}
	}
	return false;
}




