////////////////////Source.cpp
#include "Line.h"
#include <iostream>
using namespace std;
Line makeLine(double x, double y)
{
	Line z;
	if (!z.Init(x, y))
		cout << "Wrong arguments to Init!" << endl;
	return z;
}
int main()
{
	Line z;
	z.Read();
	z.Display();
	double x;
	cout << "x = ";cin >> x;
	cout << "function = " << z.function(x) << endl << endl;

	double A, B;
	cout << "Input line value:" << endl << endl;
	cout << " A = "; cin >> A;
	cout << " B = "; cin >> B;
	z = makeLine(A, B);
	z.Display();
	cout << "function = " << z.function(x) << endl;
	cin.get();
	return 0;
}
