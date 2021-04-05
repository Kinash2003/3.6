//D1.h
#pragma once
#include "B1.h"
#include "B2.h"

class D1 : private B1, public B2
{
private:
	int d1;

public:
	D1(int d1, int b1, int b2);
	void show_D1();
};

