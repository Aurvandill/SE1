
#include <iostream>

using namespace std;

double newton(double a, double b, double c, double eps, double x0)
{
	double x1 = x0;
	double compare;
	do{
		x0 = x1;
		x1 = x0 - (((x0*x0*x0) + a*(x0*x0) + b*x0 + c) / ((3 * x0*x0) + 2 * a*x0 + b));

		if (x0 > x1)
			compare = x0 - x1;
		else
			compare = x1 - x0;

	} while (compare > eps);

	return x1;

}


int main(void)
{

	double a, b, c, x0, eps;

	cout << "bitte geben sie a ein: ";
	cin >> a;
	cout << "bitte geben sie b ein: ";
	cin >> b;
	cout << "bitte geben sie c ein: ";
	cin >> c;
	cout << "bitte geben sie x0 ein: ";
	cin >> x0;
	cout << "bitte geben sie eps ein: ";
	cin >> eps;
	cout << "Nullstelle: " << newton(a, b, c, eps, x0) << endl;

	return 0;
}

