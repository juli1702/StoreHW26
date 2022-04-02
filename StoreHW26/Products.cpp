#include "Products.h"
#include <iostream>

void printProd(product& P) {
	std::cout << "Название товара -> " << P.name << std::endl;
	std::cout << "Количество товара -> " << P.number << std::endl;
	std::cout << "Цена за единицу товара - > " << P.price << std::endl;
}

int fullPrice(product& P){
	return P.price * P.number;
}

void sell(product& P, int num){
	P.number -= num;
}