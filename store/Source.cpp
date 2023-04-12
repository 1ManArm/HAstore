#include <iostream>
#include "Products.h"



int main() {
	setlocale(LC_ALL, "Russian");

	product p1{
		"�����",
		8,
		150
	};

	product p2{
		"�������",
		16,
		35
	};

	product p3{
		"���� �������",
		9,
		170
	};

	print_prod(p1);
	print_prod(p2);
	print_prod(p3);

	std::cout << std::endl;
	std::cout << "����� ��������� ������� ������������ - " << full_price(p1) << std::endl;
	std::cout << "����� ��������� ������� ������������ - " << full_price(p2) << std::endl;
	std::cout << "����� ��������� �������� ������������ - " << full_price(p3) << std::endl;
	std::cout << std::endl;
	
	sell(p1);
	std::cout << std::endl;
	sell(p2);
	std::cout << std::endl;
	sell(p3);
	std::cout << std::endl;

	return 0;
}