#pragma once
#include<iostream>
#include <string>

using namespace std;

class Point
{
private:
	double x, y;

public:
	Point();
	Point(double x, double y);
	Point(const Point&);

	double getX() const { return x; }
	double getY() const { return y; }
	void setX(double value) { x = value; }
	void setY(double value) { y = value; }

	friend istream& operator >> (istream&, Point& a);
	friend ostream& operator << (ostream&, Point& a);

	operator string() const;
};
