#include<iostream>
#include<string>

#include"UserInterface.h"
#include"MainMenu.h"
#include"Application.h"
#include"LoginMenu.h"
#include"SystemEditor.h"
#include"CreateUserMenu.h"
#include"Product.h"
#include"POS.h"
//Use standard template lirbary for list rather than make my own 
#include <list>

using namespace std;

UserInterface ui;
Application app = Application();
SystemEditor* editor = new SystemEditor();

int main() {
	int Option;
	POS* pos = new POS();

	//Seeding[List assert[List head != null].....................................................
	std::string name = "defaultuser", password = "password", username = "DefaultUsername01";
	User* newuser = new User(name, password, username);
	app.AddNewUser(newuser);
	int ID = 1;
	std::string productName = "seedingProduct", productDescription = "seed within the list so head of list not null";
	float productPrice = 1.1;
	std::string Type = "ListItem", Catagory = "Exception";
	Product* seedingProduct = new Product(ID, productName, productDescription, productPrice, Type, Catagory);
	pos->returnProductList()->push_back(seedingProduct);
	//...........................................................................................
	cout << "Please select an option: " << endl;
	cout << "1) Login" << endl;
	cout << "2) Create Account" << endl;
	cout << "3) Demo Application" << endl;
	cin >> Option;

	if (Option == 1) {
		//login
		LoginMenu("LoginMenu", &app);
	}else if(Option == 2) {
		//create account
		CreateUserMenu("RegisterUser", &app);
	}else if (Option == 3) {
		//demo user 
		editor->RunDemoVersion();
		MainMenu("MainMenu", &app);
	}
	return(0);
}