#pragma once
#include"Application.h"
#include"Utils.h"
#include"List.h"
#include"Product.h"
#include"POS.h"

#include<iostream>
#include<conio.h>
#include<string>

class UserInterface {
public:

	void GettingUser(std::string&);
	void Hold_Window();
	int GetKeypressFromUser() const;
	void CreateUser(std::string&, std::string&, std::string&);
	void ClearScreen();

	void Line();
	void Line(const std::string&);
	void Option(int, const std::string&);
	std::string Question(const std::string&);

	void displayProduct();

private:
	Application app;
	Utils ut;
};