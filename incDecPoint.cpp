#include "incDecPoint.h"
incDecPoint& incDecPoint::operator --() throw (myerror)
{
	if (x == -100)
		throw new myerror("x== -100");
	--x;
	return *this;
}
incDecPoint& incDecPoint::operator ++() throw (myerror)
{
	if (x == 100)
		throw new myerror("x== 100");
	++x;
	return *this;
}
incDecPoint incDecPoint::operator --(int) throw (myerror)
{
	if (y == -100)
		throw new myerror("y== -100");
	incDecPoint tmp(*this);
	--y;
	return tmp;
}
incDecPoint incDecPoint::operator ++(int) throw (myerror)
{
	if (y == 100)
		throw new myerror("y== 100");
	incDecPoint tmp(*this);
	++y;
	return tmp;
}
