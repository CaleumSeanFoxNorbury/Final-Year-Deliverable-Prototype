#include "Product.h"

Product::Product(int ID, std::string productName, std::string productDescription, float productPrice, std::string Type, std::string Catagory) : ID(ID), productName(productName), productDescription(productDescription), productPrice(productPrice), Type(Type), Catagory(Catagory)
{
}

int Product::getProductID()
{
	return ID;
}

std::string Product::getProductName()
{
	return productName;
}

std::string Product::getProductDescription()
{
	return productDescription;
}

float Product::getPrice()
{
	return productPrice;
}

std::string Product::getProductType()
{
	return std::string();
}

std::string Product::getProductCatagory()
{
	return Type;
}

void Product::setID(int id)
{
	ID = id;
}

void Product::setProductName(std::string name)
{
	productName = name;
}

void Product::setProductDescription(std::string description)
{
	productDescription = description;
}

void Product::setPrice(float price)
{
	productPrice = price;
}

void Product::setProductType(std::string type)
{
	Type = type;
}

void Product::setproductCatagory(std::string catagory)
{
	Catagory = catagory;
}
