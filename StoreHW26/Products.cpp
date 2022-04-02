#include "Products.h"
#include <iostream>

void printProd(product& P) {
	std::cout << "�������� ������ -> " << P.name << std::endl;
	std::cout << "���������� ������ -> " << P.number << std::endl;
	std::cout << "���� �� ������� ������ - > " << P.price << std::endl;
}

int fullPrice(product& P){
	return P.price * P.number;
}

void sell(product& P, int num){
	P.number -= num;
}