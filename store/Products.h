#pragma once
#include <iostream>

struct product {
	std::string name = "noname";
	int number = 0;
	int price = 0;
};

void print_prod(const product& P);

int full_price(const product& P);

void sell(const product& P);