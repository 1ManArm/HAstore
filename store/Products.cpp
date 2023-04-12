#include "Products.h"
#include <iostream>


void print_prod(const product& P) {
	std::cout << "|������������ : " << P.name << std::endl;
	std::cout << "|����������   : " << P.number << std::endl;
	std::cout << "|���� �� 1 ��.: " << P.price << std::endl;
	std::cout << "|_______________" << std::endl;
}

int full_price(const product& P) {
	int total = P.price * P.number;
	return total;
}

void sell(const product& P) {
	std::cout << "������������ ������������ ������ - " << P.name <<std::endl;
	std::cout << "���������� ������ - " << P.number << std::endl;
	std::cout << "������� �������� -> ";
	int number;
	std::cin >> number;
	std::cout << "�������� " << P.number - number << " ������ ������.\n���������� ��������� ������ ���������� " << (P.number - number) * P.price << std::endl;
}