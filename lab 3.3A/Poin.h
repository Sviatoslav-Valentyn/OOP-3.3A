#pragma once
#include "Point.h"

class Poin :public Point
{

public:
	Poin();
	Poin(double x, double y);
	Poin(const Poin&);

	double Angle();
	double Origin();

	friend bool operator== (const Poin& s1, const Poin& s2);
	friend bool operator!= (const Poin& s1, const Poin& s2);

	Poin& operator ++();
	Poin& operator --();
	Poin operator ++(int);
	Poin operator --(int);

};

