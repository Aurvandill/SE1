//Ich hane keien ahnung oob es korrekt läuft~ keine lsut zum testen

#include <iostream>

using namespace std;

double newton(double a, double b, double c, double eps, double x0)
{
	double x1=0;
	double compare = x0-x1;	
	if (compare < eps){cout<<"Funktion nicht ausgeführt"<<endl;}
	for (int x =0 ; compare>eps; x++){
		
		x1 = x0-(((x0*x0*x0)+a*(x*x)+b*x+c)/((3*x0*x0)+2*a*x+b));
		compare =x0-x1;
		x0=x1;
		
	}
	
	return x0;
	
}


int main(void)
{
	
	double a, b, c, x0, eps;
	
	cout <<"bitte geben sie a ein: ";
	cin>>a;
	cout <<"bitte geben sie b ein: ";
	cin>>b;
	cout <<"bitte geben sie c ein: ";
	cin>>c;
	cout <<"bitte geben sie x0 ein: ";
	cin>>x0;
	cout <<"bitte geben sie eps ein: ";
	cin>>eps;
	cout<< "Nullstelle: " << newton(a,b,c,eps,x0) << endl;
	
	return 0;
}

