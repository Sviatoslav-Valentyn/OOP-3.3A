#pragma once
#include "Point.h"

class P :private Point
{

public:
	P();
	P(double x, double y);
	P(const P&);

	double Angle();
	double Origin();

	friend bool operator== (const P& s1, const P& s2);
	friend bool operator!= (const P& s1, const P& s2);

	operator string () const;
	friend istream& operator >> (istream&, P& a);
	friend ostream& operator << (ostream&, P& a);

	P& operator ++();
	P& operator --();
	P operator ++(int);
	P operator --(int);

};