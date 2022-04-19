#include "P.h"
#include<iostream>
#include <string>
#include <sstream>

using namespace std;
P::P()
	: Point() {}

P::P(double a, double b)
	: Point(a, b) {}

P::P(const P& t)
	: Point(t) {}

double P::Angle()
{
	double Pi = 4. * atan(1);
	if ((getX() == 0) && (getY() == 0))
		return -1;
	if (getX() == 0)
		return ((getY() > 0) ? 90 : 270);
	double theta = atan(getY() / getX());
	theta *= 360 / (2 * Pi);
	if (getX() > 0)
	{
		return ((getY() >= 0) ? theta : 360 + theta);
	}
	else
	{
		return (180 + theta);
	}
}

double P::Origin()
{
	double z;
	z = sqrt((getX() * getX()) + (getY() * getY()));
	return z;
}

bool operator==(const P& s1, const P& s2)
{
	return s1.getX() == s2.getX() && s1.getY() == s2.getY();
}

bool operator!=(const P& s1, const P& s2)
{
	return !(s1 == s2);
}

P::operator string() const
{
	stringstream sout;
	sout << "(" << getX() << "; " << getY() << ")";
	return sout.str();
}

istream& operator >> (istream& input, P& a)
{
	double x, y;
	cout << "x = "; input >> x;
	cout << "y = "; input >> y;
	a.setX(x), a.setY(y);

	return input;
}
ostream& operator << (ostream& output, P& a)
{
	output << string(a) << endl;
	return output;
}

P& P::operator ++()
{
	setX(getX() + 1);
	return *this;
}

P& P::operator --()
{
	setY(getY() + 1);
	return *this;
}

P P::operator ++(int)
{
	P tmp = *this;
	setX(getX() + 1);
	return tmp;
}

P P::operator --(int)
{
	P tmp = *this;
	setY(getY() + 1);
	return tmp;
}