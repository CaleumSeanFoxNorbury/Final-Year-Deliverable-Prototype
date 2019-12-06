#pragma once
#include"List.h"
#include"Product.h"
#include <vector>

class POS {
public:
	POS();
	~POS();

	Product* getProduct(int) const;
	//void deleteProduct(Product*); in final version
	void addNewProduct(Product *&);
	std::vector<Product*>* returnProductList();
	//List<Product*> returnBasket();
private:
	std::vector<Product*>* products = new std::vector<Product*>(); 
	//List<Product*> basket;
	//List<Transaction*> transaction; 
};