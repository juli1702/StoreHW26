#include <iostream>
#include "Products.h"
#include <string>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	product num1 = { "���������" , 15, 10 };
	product num2 = { "����", 6, 20 };
	product num3 = { "���", 8, 25 };
	cout << "������ �������: \n1."; 
	printProd(num1);
	cout << "����� ���������  ������� : " << fullPrice(num1) << endl;
	sell(num1, 5);
	cout <<"\n����� ������� �������� -> " << num1.number <<" �������.\n";
	cout << "����� ��������� ���������� ������� : " << fullPrice(num1) << endl;
	cout << "\n2.";
	printProd(num2);
	cout << "����� ��������� ������� : " << fullPrice(num2) << endl;
	sell(num2, 3);
	cout << "\n����� ������� �������� -> " << num2.number << " �������.\n";
	cout << "����� ��������� ���������� ������� : " << fullPrice(num2) << endl;
	cout << "\n3.";
	printProd(num3);
	cout << "����� ��������� ������� : " << fullPrice(num3) << endl;
	sell(num3, 6);
	cout << "\n����� ������� �������� -> " << num3.number << " �������.\n";
	cout << "����� ��������� ���������� ������� : " << fullPrice(num3) << endl;



	return 0;
}