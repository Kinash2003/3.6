//D2.h
#pragma once
#include "B1.h"
#include "B2.h"

class D2 : public B1, private B2
{
private:
	int d2;

public:
	D2(int d1, int b1, int b2);
	void show_D2();
};


