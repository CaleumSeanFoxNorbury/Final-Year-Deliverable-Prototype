#include<iostream>
#include<string>

#include"UserInterface.h"
#include"MainMenu.h"
#include"Application.h"
#include"LoginMenu.h"

using namespace std;

int main() {
	UserInterface ui;
	Application app;
	int Option;

	std::string name = "defaultuser", password = "password", username = "DefaultUsername01";
	User* newuser = new User(name, password, username);
	app.AddNewUser(newuser);
	cout << "Please select an option: " << endl;
	cout << "1) Login" << endl;
	cout << "2) Create Account" << endl;
	cout << "3) Demo Application" << endl;

	cin >> Option;

	if (Option == 1) {
		//login
		LoginMenu("LoginMenu", &app);
		MainMenu("MainMenu", &app);
	}else if(Option == 2) {
		//create account
	
	}else if (Option == 3) {
		//demo user 

		MainMenu("MainMenu", &app);
	}
	return(0);
}