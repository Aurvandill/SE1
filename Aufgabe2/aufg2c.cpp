#include <iostream>

using namespace std;

double squareroot(double a, double eps)
{
	double x0=a;
	double x1=0;
	double compare =x0-x1;
	
	while (compare>eps){
		x1=(x0+(a/x0))/2;
		compare =x0-x1;
		x0=x1;
	}
	return x0;
	
}

int main(void)
{
	unsigned int a=0;
	unsigned int eps=0;
	
	cout << "bitte geben sie a ein: ";
	cin >> a;
	cout << "bitte geben sie eps ein: ";
	cin >> eps;
	cout << endl << "Ergebniss: " << squareroot(a, eps)<<endl;
	
	
	return 0;
}

