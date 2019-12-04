#pragma once

#include"POS.h"
#include"Product.h"
#include"UserInterface.h"

#include<string>

class SystemEditor {
public:
	SystemEditor();

	void createNewProduct();
	void editProduct(int);
	void deleteProduct();

	void SeedDefaultAccounts();
	void SeedDefaultProducts();
private:
	UserInterface ui;
	POS* pos;
};