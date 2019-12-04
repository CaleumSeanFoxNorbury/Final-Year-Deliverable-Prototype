#pragma once

#include"POS.h"
#include"Product.h"
#include"UserInterface.h"
#include"Application.h"

#include<string>

class SystemEditor {
public:
	SystemEditor();

	void createNewProduct();
	void editProduct(int);
	void deleteProduct();

	void RunDemoVersion();
	void SeedDefaultAccounts();
	void SeedDefaultProducts();
private:
	UserInterface ui;
	POS* pos;
	Application* app = new Application();
};