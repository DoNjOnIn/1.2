#include <iostream>
#include "Fraction.h"
using namespace std;

Fraction makeFraction(int x, int y)
{
	Fraction z;
	if (!z.init(x, y))
		cout << "Wrong arguments" << endl;
	return z;
}

int main()
{
	Fraction f1, z;
	cout << "Fraction 1:" << endl;
	z = makeFraction(822, 522);
	z.display();
	z.abb();
	cout << "Reduction" << endl;
	z.display();
	z.count();

	f1.read();
	f1.display();
	f1.abb();
	cout << "Reduction" << endl;
	f1.display();
	f1.count();

	return 0;
}
