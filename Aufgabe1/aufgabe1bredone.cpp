#include <iostream>
#include <stdint.h>

using namespace std;

void mask(unsigned int zahl);
void bitshifter(unsigned int zahl1,unsigned int zahl2, unsigned int p, unsigned int n);

int main(int argc, char **argv)
{
	unsigned int x = 0;

	cout << "bitte geben sie eine Integer Zahl ein die in binär umgewandelt werden soll" << endl << "Zahl : ";
	cin >> x;
	mask(x);
	cout << endl;

	unsigned int zahl1 = 0;
	unsigned int zahl2 = 0;
	unsigned int p = 0;
	unsigned int n = 0;

	cout << "zahl 1 :";
	cin >> zahl1;
	cout << "zahl 2 :";
	cin >> zahl2;
	cout << "zahl n :";
	cin >> n;
	cout << "zahl p :";
	cin >> p;
	bitshifter(zahl1, zahl2, p, n);

	return 0;
}

void mask(unsigned int zahl){

	//erstellung der Maske
	unsigned int maske = 0;
	maske = ~((~(unsigned)0)>>1);

	//while schleife
	while (maske != 0){
	//fallunterscheidung
		//falls es keien 0 ist gebe 1 aus
		if ((zahl & maske) != 0){
			printf ("1");
		}
		//falls 0 gebe 0 aus
		else {
			printf ("0");
		}
	//maske wird um 1 nach rechts verschoben
	maske >>= 1;
	}
}

void bitshifter(unsigned int zahl1,unsigned int zahl2, unsigned int p, unsigned int n){
	//Ausgabe beider Ursprungszahlen in binary für kontrolle und so
	cout << "Zahl 1: "; mask(zahl1);
	cout << endl << "Zahl 2: ";mask(zahl2);
	cout <<endl<< "ergeb.: ";

	//Maske für zahl2 erstellen und drüberlegen
	unsigned int maske = 0;
	maske = ~((~(unsigned)0) << n);
	zahl2 &= maske;
	//Zahl 2 and richtige Stelle schieben
	zahl2 <<= (p);
	
	//maske zahl 1 erstellen
	unsigned int maske2 = 0;
	maske2 = (~(unsigned)0);				//FEHLER
	maske2 ^= (maske<<p);
	//maske über zahl legen
	zahl1 &= maske2;
	zahl1 ^= zahl2;
	//ausgabe veränderter zahl
	mask(zahl1);


	
	
}

