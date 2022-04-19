#include "Point.h"
#include<iostream>
#include <string>
#include <sstream>

using namespace std;
Point::Point()
	: x(0), y(0)
{}

Point::Point(double x, double y)
{
	this->x = x;
	this->y = y;
}

Point::Point(const Point& t)
{
	this->x = t.x;
	this->y = t.y;
}
istream& operator >> (istream& input, Point& a)
{
	cout << "x = "; input >> a.x;
	cout << "y = "; input >> a.y;

	return input;
}
Point::operator string() const
{
	stringstream sout;
	sout << "(" << this->x << "; " << this->y << ")" << endl;
	return sout.str();
}

ostream& operator << (ostream& output, Point& a)
{
	output << string(a) << endl;
	return output;
}