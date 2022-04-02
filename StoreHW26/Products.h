#pragma once
#include <iostream>
#include <string>

struct product {
	std::string name;
	int number = 0;
	int price;
};

void printProd(product& P); // принимает объект и выводит всю информацию о нём
int fullPrice(product& P); //принимает объект и возвращает полную стоимость при покупке всех оставшихся товаров разом;
void sell(product& P, int num); //принимает объект и число, на которое снижается количество товара у данного объекта.