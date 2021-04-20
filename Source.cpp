#include "incDecPoint.h"

int main()
{
	Point A;
	cin >> A;
	cout << A;
	try {
		Point B(2, 3);
		Point C(B);
		cout << B;
		cout << C;
		cout << "--------------------" << endl;
	}
	catch (out_of_range e)
	{
		cout << "exception: " << e.what() << endl;
	}
	
	opPoint A1;
	cin >> A1;
	cout << A1;
	cout << "--------------------" << endl;
	try {
		opPoint B1(3, 4);
		cout << (string)B1;
		incDecPoint B2(5, 5);
		cout << B2;
		++B2;
		cout << B2;		
		cout << B2.GetX() << endl;
	}
	catch (out_of_range e) {
		cout << "exception: " << e.what() << endl;
	}
	catch (myerror* e2)
	{
		cout << "exception: " << e2->what() << endl;
	}
	cout << "Moving the point x:";
	A1.movingThePoint_X();
	cout << endl;
	cout << "Moving the point y:";
	A1.movingThePoint_Y();
	cout << endl;
	incDecPoint A2;
	cin >> A2;
	cout << A2;
	Point A4;
	try {
		A4.SetX(-101);
	}
	catch (myerror_base& e)
	{
		cout << "exception: " << e.what() << endl;
	}
}