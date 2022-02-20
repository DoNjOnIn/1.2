#include "Fraction.h"
#include <iostream>
using namespace std;

void Fraction::set_up(unsigned int value)
{
	up = value;
}

void Fraction::set_down(unsigned int value)
{
	down = value;
}

void Fraction::display() const
{
	cout << up << endl;
	cout <<"---" << endl;
	cout << down << endl;
	
}


bool Fraction::init(int x, int y)
{
	if (y != 0) {
		up = x;
		down = y;
		return true;
	}
	else {
		return false;
	}
	
};


void Fraction::read()
{
	int x, y;
	cout << "up = ";
	cin >> x;
	cout << "down = ";
	cin >> y;
	if (!init(x,y))
	{
		cout << "Wrong arguments" << endl;
		read();
	}

}

void Fraction::count()
{
	cout << "Fraction=";
	cout<< up * 1.0 / down << endl;

}

void Fraction::abb()
{
	int* x;
	int i=2, k=0;
	if (up < down) { x =&up; }
	else { x =&down; }
	while (i <= abs(* x)) {
		if (up % i == 0 && down % i == 0) {
			up /= i;
			down /= i;
			   k += 1;
				i = 2;
		}
		else {
			i += 1;
		}
	}
	if (k == 0) {
		cout << "Fraction can not be kortshe" << endl;
	}
}
