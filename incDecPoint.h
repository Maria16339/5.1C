#pragma once
#include "opPoint.h"
class incDecPoint : public opPoint
{
public:
	incDecPoint() : opPoint() {};
	incDecPoint(double a, double b) : opPoint(a, b) {};
	incDecPoint(const incDecPoint& A) : opPoint(A) {};
	incDecPoint& operator --() throw (myerror);
	incDecPoint& operator ++() throw(myerror);
	incDecPoint operator --(int) throw(myerror);
	incDecPoint operator ++(int) throw(myerror);
};
