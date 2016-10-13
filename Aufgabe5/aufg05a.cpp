#include <iostream>


using namespace std;
int anzahl = 4;

int main(int argc, char **argv)
{
	
	int c[anzahl];
	int *maxp;
	int *minp;
	int *cp;
	
//Eingabe
	for (int s = 0; s<anzahl;s++){
			
		cout << "bitte geben sie Element "<<s+1<<" ein: ";
		cin >> c[s];		
		
		}
//sort
	cp=c;
	minp=c;
	maxp=c;	
	for (int s = 0; s<anzahl;s++){
			
			if (*(cp+s)<*minp){
				minp=(cp+s);			
				}
			if (*(cp+s)>*maxp){
				maxp=(cp+s);
				}	
//Debug		cout<<*cp+s<<" "<<*minp<< " "<< *maxp<<endl;	
		}
		 
//ausgabe	
	cout<<"min: "<<*minp<<endl<<"max: "<<*maxp;	

	return 0;
}

