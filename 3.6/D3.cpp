//D3.cpp
#include "D3.h"

D3::D3(int x, int y, int z, int i, int j)
		: D1(x, i, j), D2(y, i, j)
	{
		d3 = y;
	}
void D3::show_D3()
{
	
	cout << " class D3: " << endl;
	show_D1();
	show_D2();
	cout << " show_D3() " << endl
		<< " D3::d3 = " << d3 << endl << endl;
}