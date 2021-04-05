//B2.cpp
#include "B2.h"

B2::B2()//конструктор за умовчанням
	: B2(0)
{ }

B2::B2(int x) //конструктор ініціалізації
{
	b2 = x;
}

B2::~B2() {} //деструктор

void B2::show_B2()
{
	cout << " Class B2 " << endl;
	cout << " show_B2() " << endl;
	cout << " B2::b2 = " << b2 << endl;
}