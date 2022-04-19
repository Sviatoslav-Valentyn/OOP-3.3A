#include "Poin.h"
#include<iostream>
#include <string>
#include <sstream>

using namespace std;

Poin::Poin()
	: Point() {}

Poin::Poin(double a, double b)
	: Point(a, b) {}

Poin::Poin(const Poin& t)
	: Point(t) {}

double Poin::Angle()
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

double Poin::Origin()
{
	double z;
	z = sqrt((getX() * getX()) + (getY() * getY()));
	return z;
}

bool operator==(const Poin& s1, const Poin& s2)
{
	return s1.getX() == s2.getX() && s1.getY() == s2.getY();
}

bool operator!=(const Poin& s1, const Poin& s2)
{
	return !(s1 == s2);
}

Poin& Poin::operator ++()
{
	setX(getX() + 1);
	return *this;
}

Poin& Poin::operator --()
{
	setY(getY() - 1);
	return *this;
}

Poin Poin::operator ++(int)
{
	Poin tmp = *this;
	setX(getX() + 1);
	return tmp;
}

Poin Poin::operator --(int)
{
	Poin tmp = *this;
	setY(getY() - 1);
	return tmp;
}
