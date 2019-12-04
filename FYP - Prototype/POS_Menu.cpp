#include "POS_Menu.h"

POS_Menu::POS_Menu(const std::string& title, Application* app): Menu(title, app)
{
	DisplayMenu();
}

void POS_Menu::OutputMenuOptions()
{
	for (int i(0); i < pos->returnProductList().length(); i++) {
		
	}
}

bool POS_Menu::HandleMenuOption(char)
{
	return false;
}
