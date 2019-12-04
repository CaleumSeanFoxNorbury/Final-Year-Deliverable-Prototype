#pragma once
#include"List.h"
#include"Product.h"

#include <vector>

class POS {
public:
	POS();

	Product* getProduct(int) const;
	//void deleteProduct(Product*);

	List<Product*> returnProductList();
	List<Product*> returnBasket();
private:
	List<Product*> products; 
	List<Product*> basket;
	//List<Transaction*> transaction;
};