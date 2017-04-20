// Structures.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>

struct shares
{
	std::string CoName;
	double price;
};
int main()
{
	shares share1;

	share1.CoName = "Apple";
	share1.price = 897.00;

	std::cout << "Name of stock: " << share1.CoName << std::endl;
	std::cout << "Price of stock: " << share1.price << std::endl;

	system("pause");
    return 0;
}

