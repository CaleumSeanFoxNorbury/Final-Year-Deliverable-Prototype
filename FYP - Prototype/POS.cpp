#include "POS.h"

POS::POS()
{
}

Product* POS::getProduct(int index) const
{
	return products[index];
}

List<Product*> POS::returnProductList()
{
	return products;
}

List<Product*> POS::returnBasket()
{
	return basket;
}
