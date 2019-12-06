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
	void editProduct(int);//in final version
	void deleteProduct();//in final version

	void RunDemoVersion();
	void SeedDefaultAccounts();
	void SeedDefaultProducts();
private:
	UserInterface ui;
	POS* pos = new POS();
	Application* app = new Application();
};