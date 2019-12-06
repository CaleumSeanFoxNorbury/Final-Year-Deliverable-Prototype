#include "POS.h"

POS::POS()
{
}

POS::~POS()
{
}

Product* POS::getProduct(int index) const
{
	return products->operator[](index);
}

void POS::addNewProduct(Product *& product)
{
	products->push_back(product);
}

std::vector<Product*>* POS::returnProductList()
{
	return products;
}

