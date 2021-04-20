#pragma once
#include "Point.h"
class opPoint : public Point
{
public:
	opPoint() : Point() {};
	opPoint(double a, double b) : Point(a, b) {};
	opPoint(const opPoint& A) : Point(A) {};
	
	void movingThePoint_X();
	void movingThePoint_Y();
	string toString() const;
	void Distance() const { cout << "Distance: " << sqrt(x * x + y * y) << endl; };

};
