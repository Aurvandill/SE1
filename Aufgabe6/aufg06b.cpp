#include <string>
#include <iostream>
#include <stdio.h>


using namespace std;


unsigned int lenght(char *s){
	
	unsigned int buffer;
		for (buffer=0; *s != '\0'; s++){
		buffer++;
		}
	return buffer;
	
}

void deletes(char *s,unsigned int p,unsigned int n, unsigned int slenght);



int main(void)
{
	//String
	char test[24] = "unveraendert";
	//string string;
	int p=0;
	int n=0;
	cout << "Bitte geben sie den String ein (max 24 Zeichen): ";

	scanf("%23s", test);
	cout<<test<<endl;
	cout << "bitte geben sie p ein: ";
	cin >> p;
	cout << "bitte geben sie n ein: ";
	cin >> n;
	
	deletes(test, p,n,lenght(test));
	cout <<test;
	
	
	return 0;
}

void deletes(char *s,unsigned int p,unsigned int n, unsigned int slenght){
	
	s+=p;
	

	if (p >= slenght){
		return;
	}
		
	if (p+n>=slenght){
			
				*s='\0';
	}
	
	
	if(p+n<=slenght){
		
		for (unsigned int bytesreplaced = 0; bytesreplaced < slenght-(p+n)+1 ; bytesreplaced++ , s++){
			
				*s=*(s+n);
			//	cout <<*s<<endl;//debuging
		}
		
	}


	
};

