#include "Products.h"
#include <iostream>


void print_prod(const product& P) {
	std::cout << "|Наименование : " << P.name << std::endl;
	std::cout << "|Количество   : " << P.number << std::endl;
	std::cout << "|Цена за 1 шт.: " << P.price << std::endl;
	std::cout << "|_______________" << std::endl;
}

int full_price(const product& P) {
	int total = P.price * P.number;
	return total;
}

void sell(const product& P) {
	std::cout << "Наименование продаваемого товара - " << P.name <<std::endl;
	std::cout << "Количество товара - " << P.number << std::endl;
	std::cout << "Сколько продаете -> ";
	int number;
	std::cin >> number;
	std::cout << "Осталось " << P.number - number << " единиц товара.\nОстаточная стоимость товара составляет " << (P.number - number) * P.price << std::endl;
}