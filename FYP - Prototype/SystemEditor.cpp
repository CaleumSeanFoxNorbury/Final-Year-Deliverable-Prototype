#include "SystemEditor.h"

SystemEditor::SystemEditor()
{
}

void SystemEditor::createNewProduct()
{
	float price;
	std::string productname = ui.Question("Enter the name of the product: ");
	std::string de = ui.Question("Enter a small description of the product: ");
	ui.Question("Enter the price: ");
	std::cin >> price;
	std::string type = ui.Question("Enter the product type: ");
	std::string cat = ui.Question("Enter the product catagory: ");
	int id = pos->returnProductList().length()+2;
	
	Product* newproduct = new Product(id, productname, de, price, type, cat);
	
	pos->returnProductList().addInFront(newproduct);
	
}

void SystemEditor::RunDemoVersion()
{
	//run seeding functions 
	SeedDefaultProducts();
	SeedDefaultAccounts();
}

void SystemEditor::SeedDefaultAccounts()
{
	User* user1 = new User("DefaultUserOne", "password", "userone");
	User* user2 = new User("DefaultUserTwo", "password", "usertwo");
	User* user3 = new User("DefaultUserThree", "password", "userthree");

	app->AddNewUser(user1);
	app->AddNewUser(user2);
	app->AddNewUser(user3);
}

void SystemEditor::SeedDefaultProducts()
{
	int id = 1;
	std::string name = "KossiKuttan(curry)";
	std::string description = "Coconut and chicken based curry";
	float price = 12.50;
	std::string type = "Food";
	std::string cat = "Asian Exclusives";

	int id2 = 2;
	std::string name2 = "Chicken Kati";
	std::string description2 = "Chicken Balti with rainbow salad";
	float price2 = 8.00;
	std::string type2 = "Food";
	std::string cat2 = "Asian Street Food";

	int id3 = 3;
	std::string name3 = "Extras";
	std::string description3 = "Any extras: ";
	float price3 = 1.00;
	std::string type3 = "Extras";
	std::string cat3 = "Sides";

	Product* defaultOne = new Product(id, name, description, price, type, cat);
	pos->returnProductList().addInFront(defaultOne);
	Product* defaultTwo = new Product(id2, name2, description2, price2, type2, cat2);
	pos->returnProductList().addInFront(defaultTwo);
	Product* defaultThree = new Product(id3, name3, description3, price3, type3, cat3);
	pos->returnProductList().addInFront(defaultThree);
}
