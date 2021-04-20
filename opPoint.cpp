#include "opPoint.h"
#include "iostream"
using namespace std;
void opPoint::movingThePoint_X()
{
	float rx;
	cin >> rx;
	x += rx;
	cout << x;
	toString();

}

void opPoint::movingThePoint_Y()
{
	float ry;

	cin >> ry;
	y += ry;
	cout << y;
	toString();
	cout << endl;
	cout << "Distance: " << sqrt(x * x + y * y) << endl;
}

string opPoint::toString() const
{
	stringstream SS;
	SS << "(" << x << "; " << y << ")" << endl;
	return SS.str();
}