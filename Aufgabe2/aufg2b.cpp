#include <iostream>

using namespace std;

int horner(int a, int x,int n)
{
	int horner =a;
	for (int i =0; i<n;i++){
		
		horner*=x;
		horner+=a;
		
	}
	return horner;
	
}

int main(void)
{
	//Horner schema
	
	int a,x,n=0;
	
	cout << "bitte geben sie a ein: ";
	cin >> a;
	cout << "bitte geben sie x ein: ";
	cin >> x;	
	cout << "bitte geben sie n ein: ";
	cin >> n;
	cout << "Ergebnis ist: " << horner(a,x,n);
	
	return 0;
}

