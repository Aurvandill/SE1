#include <iostream>
#include <fstream>
#include <string>

using namespace std;


struct Schiff{
	
	string Typ;
	int Flaeche;
	string Material;	
	
};

int main(void)
{
	
const int max =2;	
	Schiff schiffe[max];
	ofstream Boote;
	Boote.open ("Boote.dat");
	
	//Eingabe
	for (int s=0; s<max;s++){
		cout << "Schiff: " << s+1<<endl;
		cout << "Typ: " ;
		cin >> schiffe[s].Typ;
		cout << "Flaeche: ";
		cin >> schiffe[s].Flaeche;
		cout << "Material: ";
		cin >> schiffe[s].Material;
		
	}
	//In Datei schreiben
	for (int s=0; s<max;s++){
		
		Boote << "Schiff: " << s+1 << "\n Typ: " <<schiffe[s].Typ
			<< "\n Flaeche: "<< schiffe[s].Flaeche <<"\n Material: "
			<< schiffe[s].Material<<"\n";
		
	};
	Boote.close();
	
	
	
	return 0;
}

