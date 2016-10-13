#include <iostream>
#include <string>
using namespace std;

		struct Segel{
			
			int flaeche;
			string material;
		};

	struct Boot {
		
		string Typ;
		Segel segel;
			
		};

int main(int argc, char **argv)
{


	struct Boot Boote[20];
	int firstzero= 99;
	
	//Input
	
	for (int s = 0; s<20 && s!=firstzero+1; s++){
		
		cout<< "Eingaben fuer das Boot "<<s+1<<endl<<"Typ: ";
		cin >> Boote[s].Typ;
		cout<<"Material des Segels: ";
		cin >> Boote[s].segel.material;
		cout<<"Flaeche des Segels: ";
		cin >> Boote[s].segel.flaeche;
		if (Boote[s].segel.flaeche==0){			//für Ausgabe und Rechnungen 
			firstzero=s;						//im Array damit er nicht mit den 
			//s=20;								//Segeln Größe 0 rechnet oder sortiert
			}; 
			cout<<endl;									
		}
		
	//Sort
	int buffer;
	for(int schleife = 0;Boote[schleife].segel.flaeche>Boote[schleife+1].segel.flaeche;schleife++){
		
		if (Boote[schleife].segel.flaeche>Boote[schleife+1].segel.flaeche){
			buffer=Boote[schleife].segel.flaeche;
			Boote[schleife].segel.flaeche=Boote[schleife+1].segel.flaeche;
			Boote[schleife+1].segel.flaeche=buffer;
			}
		
		if (schleife==18 || schleife==firstzero-1 ){
			schleife=0;
			}
		}
	
	//Durchschnitt
	
	int segelflaeche=0;
	
	for (int s = 0; s<20 && s!=firstzero+1; s++){
		
		segelflaeche+=Boote[s].segel.flaeche;
		
		}
	int durchschnitt = 0;
	if (firstzero<<20){
		durchschnitt = segelflaeche/(firstzero);
		}
	else{
		durchschnitt = segelflaeche/20;
		}
	cout<<"Durchschnitt der Segelflaeche beträgt "<<durchschnitt<<endl;
	cout<<"Gesamtsegelflaeche ist "<<segelflaeche<<endl;
	
	
	
	//output

	
	return 0;
}

