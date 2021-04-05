//D3.h
#pragma once
#include "D1.h"
#include "D2.h"
class D3 : private D1, public D2
{
private:
	int d3;

public:
	D3(int d3, int d1, int d2, int b1, int b2);
	void show_D3();
};

