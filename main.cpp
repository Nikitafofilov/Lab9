#include "std.h"
#include <iostream>
#include <iomanip>
#include <stdlib.h>

using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    int i1, i2;
    std::cout << "Введите одно число\n";
    std::cin >> i1;
    std::cout << "Введите второе число\n";
    std::cin >> i2;
    std::cout << "Первое число - " << i1 << " Второе число - " << i2;
	
	std:i1=i1+i2;
	std::cout << сумма чисел =<< i1;
}

