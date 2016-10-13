#include <iostream>

#define INBYTES(x) sizeof(x)*8

using namespace std;

void binary (int zahl);
void bitshifter(int zahl1, int zahl2, unsigned int p, unsigned int n);

int main(int argc, char **argv)
{
	
	int x=0;
	int zahl1 = 0;
	int zahl2 = 0;
	unsigned int p = 0;
	unsigned int n = 0;
	
	cout<<"bitte geben sie eine Integer Zahl ein die in binär umgewandelt werden soll"<<endl<<"Zahl : ";
	cin>>  x;
	
	binary(x);
	
	cout <<"zahl 1 :";
	cin >> zahl1;
	cout <<"zahl 2 :";
	cin >> zahl2;
	cout <<"zahl n :";
	cin >> n;
	cout <<"zahl p :";
	cin >> p;
	
	bitshifter (zahl1, zahl2, p, n);
	
	return 0;
}

void binary (int zahl){
	
	for (int s=sizeof(zahl)*8-1; s>=0;s--){
		int x =(zahl>>s)&1;
		cout<<x;
	
		if (s%8==0){
			cout<<" ";
		}
	}
	cout << endl;	
}
// Nach Vorlesung fertig machen

void bitshifter (int zahl1, int zahl2, unsigned int p , unsigned int n){
	
	//Ausgabe beider Ursprungszahlen in binary für kontrolle und so
	
	cout << "Zahl 1: ";binary (zahl1);
	cout << "Zahl 2: ";binary (zahl2);
	cout << "ergeb.: ";

	int sn =sizeof(zahl2)*8-n+1;
	int compare=sizeof(zahl1)*8-p;
	int compare2=sizeof(zahl1)*8-p+n-1;
	for (int schleife=sizeof(zahl1)*8-1; schleife>=0;schleife--){

		if(schleife<=compare2 && schleife>=compare){		
			
				 
				 int output =(zahl2>>(-sn))&1 ; 
				 cout << output;
				sn +=1;	
				//cout << " "<<sn<<" ";    //für debuging und so
				}
		

		else {
			int output =(zahl1>>schleife)&1; cout << output; }
		
	
	if(schleife%8==0){
			cout<<" ";
		}
	}
//cout<< endl<<compare<<" "<<compare2 <<endl;	 //debuging
	
	}
