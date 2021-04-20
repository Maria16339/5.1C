#include "Point.h"
Point::Point()
{
	x = 0;
	y = 0;
}
Point::Point(double a, double b) throw (out_of_range)
{
	if (abs(a) > 100 || abs(b) > 100)
		throw out_of_range("abs(x) or abs(y) > 100");
	x = a;
	y = b;
}
Point::Point(const Point& A)
{
	x = A.x;
	y = A.y;
}
ostream& operator << (ostream& out, const Point& A)
{
	return out << "x= " << A.x << "; y= " << A.y << endl;
}
istream& operator >>(istream& in, Point& A)
{
	do {
		cout << "Enter x [-100;100]: "; in >> A.x;
		cout << "Enter y [-100;100]: "; in >> A.y;
		cout << endl;
	} while (abs(A.x) > 100 || abs(A.y) > 100);
	return in;
}
Point::operator string() const
{
	stringstream ss;
	ss << *this;
	return ss.str();
}
