#include "std.h"
#include <iostream>
#include <iomanip>
#include <stdlib.h>

using namespace std;
//������ ��������� ������������ ��� ��������

int main()
{
    setlocale(LC_ALL, "rus");
    int i1, i2,i3,i4;
    std::cout << "������� ���� �����\n";
    std::cin >> i1;
    std::cout << "������� ������ �����\n";
    std::cin >> i2;
    std::cout << "������ ����� - " << i1 << " ������ ����� - " << i2;
	
	i3=i1+i2;
	std::cout <<" ����� ����� ="<< i3;
	i4=i1-i2; std::cout <<" �������� ����� ="<< i4
	i4=i1*i2; std::cout <<" * ����� ="<< i4;
	i4=i1/i2; std::cout <<" / ����� ="<< i4;


}

