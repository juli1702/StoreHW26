#include <iostream>
#include "Products.h"
#include <string>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	product num1 = { "Апельсины" , 15, 10 };
	product num2 = { "Хлеб", 6, 20 };
	product num3 = { "Сок", 8, 25 };
	cout << "Список товаров: \n1."; 
	printProd(num1);
	cout << "Общая стоимость  товаров : " << fullPrice(num1) << endl;
	sell(num1, 5);
	cout <<"\nПосле покупки осталось -> " << num1.number <<" товаров.\n";
	cout << "Общая стоимость оставшихся товаров : " << fullPrice(num1) << endl;
	cout << "\n2.";
	printProd(num2);
	cout << "Общая стоимость товаров : " << fullPrice(num2) << endl;
	sell(num2, 3);
	cout << "\nПосле покупки осталось -> " << num2.number << " товаров.\n";
	cout << "Общая стоимость оставшихся товаров : " << fullPrice(num2) << endl;
	cout << "\n3.";
	printProd(num3);
	cout << "Общая стоимость товаров : " << fullPrice(num3) << endl;
	sell(num3, 6);
	cout << "\nПосле покупки осталось -> " << num3.number << " товаров.\n";
	cout << "Общая стоимость оставшихся товаров : " << fullPrice(num3) << endl;



	return 0;
}