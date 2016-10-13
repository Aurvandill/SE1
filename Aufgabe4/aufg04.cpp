#include <iostream>
#include <string>


using namespace std;

struct Wohnsitz{
	
	int PLZ;
	string Ort;
	
	};
	
struct Person{
	
	int PNR;
	string Name;
	
	Wohnsitz wohnsitz;
	
	int Geburtsjahr;
	string Beruf;
	
	};
int Anzahl = 2; // Anzahl der Personen

int main(int argc, char **argv)
{
	
	
	Person Personenliste[Anzahl];
	
	//eingabe
	for (int schleife=0; schleife<Anzahl; schleife++){
		cout << "Eingaben fuer Person "<<schleife+1<<endl;
		cout<< "Personen Nr.: ";
		cin>>Personenliste[schleife].PNR;
		cout<<  "Name: ";
		cin>>Personenliste[schleife].Name;
		cout<<"Wohnsitz"<<endl<<"PLZ: ";
		cin >>Personenliste[schleife].wohnsitz.PLZ;
		cout << "Ort: ";
		cin >>Personenliste[schleife].wohnsitz.Ort;
		cout<<"Geburtsjahr: ";
		cin>>Personenliste[schleife].Geburtsjahr;
		cout <<"Beruf: ";
		cin>>Personenliste[schleife].Beruf;
		cout<<endl;
		}
	cout <<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
		
	//ausgabe
	cout<<endl<<"Aufgabe a"<<endl;
	
		for (int schleife=0; schleife<Anzahl; schleife++){
			cout << "Daten von Person "<<schleife+1<<endl;
			cout<< "Personen Nr.: ";
			cout<<Personenliste[schleife].PNR<<endl;
			cout<< "Name: ";
			cout<<Personenliste[schleife].Name<<endl;
			cout<<"Wohnsitz"<<endl<<"PLZ: ";
			cout<<Personenliste[schleife].wohnsitz.PLZ<< endl;
			cout << "Ort: ";
			cout<<Personenliste[schleife].wohnsitz.Ort<< endl;
			cout <<"Geburtsjahr: ";
			cout<< Personenliste[schleife].Geburtsjahr<< endl;
			cout <<"Beruf: ";
			cout<<Personenliste[schleife].Beruf;
			cout<<endl<<endl;
		}
		int a=0;
		cout <<"beliebige zahl eingeben und Enter drücken um mit b fortzufahren";
		cin>>a;
		cout <<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
		
		cout<<endl<<"Aufgabe b"<<endl;
		
		
		//ausgabe b
		
		
	int ausgabe=0;
	for (int schleife=0; schleife<Anzahl; schleife++){
		if (2016-Personenliste[schleife].Geburtsjahr>=50){
			cout<<Personenliste[schleife].Beruf<<endl;
			ausgabe=1;
		}
		else if(ausgabe==0){cout << "keine person ist über 50";}
	}
	
	cout<<endl<<"Aufgabe c"<<endl;
	//ausgabe c
	int bufferalter=2016;
	
	for (int schleife=0; schleife<Anzahl; schleife++){
		if (bufferalter >= Personenliste[schleife].Geburtsjahr){
			bufferalter=Personenliste[schleife].Geburtsjahr;
			
			}
			
	}
	
	for (int schleife=0; schleife<Anzahl; schleife++){
		
		if (Personenliste[schleife].Geburtsjahr==bufferalter){
			cout<< "Daten der älteste Personen mit Geburtsjahr: " << bufferalter <<endl;
			cout<< "Name: "<<Personenliste[schleife].Name<< endl<<"Wohnort: "<<Personenliste[schleife].wohnsitz.Ort<<endl;
		}
	}
	cout<<endl<<"Aufgabe d"<<endl;	
	//ausgabe d	
	int PNR=0;
	string Wohnort =" ";
	cout << "Bitte geben sie die zu suchende PNR ein: ";	
	cin>>PNR;
	cout <<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout << "Personen im selben Wohnort wie mit eingegebener PNR "<<PNR<<endl;
	for (int schleife=0; schleife<Anzahl; schleife++){
		
		if (PNR==Personenliste[schleife].PNR &&Wohnort !=Personenliste[schleife].wohnsitz.Ort ){
			Wohnort= Personenliste[schleife].wohnsitz.Ort;
			schleife = 0;
			cout<<"Ort: "<<Wohnort<<endl;
			}
		if (Personenliste[schleife].wohnsitz.Ort == Wohnort){
			
			
			cout<<Personenliste[schleife].Name<<" - PNR: "<< Personenliste[schleife].PNR << endl;
			
			}
	}

	
	
	return 0;
}

