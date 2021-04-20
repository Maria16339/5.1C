#pragma once
#include <sstream>
#include <string>
#include <iostream>
#include <exception>
#include "myerror_base.h"
#include "myerror.h"
using namespace std;
class Point
{
protected:
	double x;
	double y;
public:
	Point();
	Point(double a, double b) throw (out_of_range);
	Point(const Point& A);
	void SetX(double a) throw (myerror_base) { if (abs(a) > 100) throw myerror_base(); x = a; };
	void SetY(double a) throw (myerror_base) { if (abs(a) > 100) throw myerror_base(); y = a; };
	double GetX() { return x; };
	double GetY() { return y; };
	operator string() const;
	friend ostream& operator << (ostream& out, const Point& A);
	friend istream& operator >> (istream& in, Point& A);
};