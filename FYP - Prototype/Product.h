#pragma once
#include<string>

class Product {
public:
	Product(int, std::string, std::string, float, std::string, std::string);

	int getProductID();
	std::string getProductName();
	std::string getProductDescription();
	float getPrice();
	std::string getProductType();
	std::string getProductCatagory();

	void setID(int);
	void setProductName(std::string);
	void setProductDescription(std::string);
	void setPrice(float);
	void setProductType(std::string);
	void setproductCatagory(std::string);
private:
	int ID;
	std::string productName;
	std::string productDescription;
	float productPrice;
	std::string Type;
	std::string Catagory;

};