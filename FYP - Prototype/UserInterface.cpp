#include "UserInterface.h"


void UserInterface::GettingUser(std::string& username)
{
	std::cout << "********************************" << std::endl;
	std::cout << "* Please enetr your Username:  *" << std::endl;
	std::cout << "********************************" << std::endl;
	std::cin >> username;
}

void UserInterface::Hold_Window()
{
	std::cout << "\n\n";
	system("pause");
}

int UserInterface::GetKeypressFromUser() const
{
	int keyPress(_getch());
	while (keyPress == 224) {
		keyPress = _getch();
	}
	return(toupper(keyPress));
}

void UserInterface::CreateUser(std::string& name, std::string& password, std::string& username)
{
	std::cout << "******************************" << std::endl;
	std::cout << "* Please enter your username: " << std::endl;
	std::cin >> name;
	std::cout << "* Please enter a password: " << std::endl;
	std::cin >> password;
	std::cout << "* Please enter a username: " << std::endl;
	std::cin >> username;
	std::cout << "******************************" << std::endl;
}

void UserInterface::ClearScreen()
{
#if defined _WIN32 || define _WIN64
	//4 windows
	system("CLS");
#else
	//4 mac or linux
	system("CLEAR");
#endif
}

void UserInterface::Line()
{
	std::cout << std::endl;
}

void UserInterface::Line(const std::string& text)
{
	std::cout << " " << text << std::endl;
}

void UserInterface::Option(int id, const std::string& option)
{
	std::cout << "  " << id << ") " << option << std::endl;
}

std::string UserInterface::Question(const std::string& question)
{
	std::cout << " " << question << ": ";
	return ut.Getlinefromuser();
}

void UserInterface::displayProduct(List<Product*> product)
{
	for (int i(0); i < product.length(); i++) {
		for (int row(0); row < 4; row++) {
			//std::cout << product->getProduct(i)->getProductName();
			std::cout << "  ";
			row++;
		}
		std::cout << std::endl;
	}
}




