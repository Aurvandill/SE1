#include <iostream>


using namespace std;


int main(int argc, char **argv)
{
	int matrixa[2][3];
	int matrixb[3][4];
	int matrixc[2][4]={0};
	
	//Eingabe matrixa
	for (int s1=0 ; s1<2;s1++){
		
		for (int s2=0; s2<3;s2++){
			cout<< "matrixa ["<<s1+1<<"]["<<s2+1<<"]:";
			cin>>matrixa[s1][s2];
			}
	}
		
	//Ausgabe matrixa
	for (int s1=0 ; s1<2;s1++){
		
		for (int s2=0; s2<3;s2++){
			cout<<matrixa[s1][s2];
			if(s2!=2){cout<< " - ";}
			}
			
		cout<<endl;
	}

	//Eingabe matrixb
	for (int s1=0 ; s1<3;s1++){
		
		for (int s2=0; s2<4;s2++){
			cout<< "matrixb ["<<s1+1<<"]["<<s2+1<<"]";
			cin>>matrixb[s1][s2];
			}
	}
		
	//Ausgabe matrixb
	for (int s1=0 ; s1<3;s1++){
		
		for (int s2=0; s2<4;s2++){
			cout<<matrixb[s1][s2];
			if(s2!=3){cout<< " - ";}			
			}
			
		cout<<endl;
	}
		
	// Multiplikation
	
	for (int s1=0; s1<2 ;s1++){
		
		for (int s2=0; s2<4; s2++ ){
			
			for (int counter=0; counter<3;counter++){
				matrixc[s1][s2] += (matrixa[s1][counter] * matrixb[counter][s2]);
				
			}
		}
		
	}
	cout << endl<<"Matrix c"<<endl;
	//Ausgabe matrixc
	for (int s1=0 ; s1<2;s1++){
		
		for (int s2=0; s2<4;s2++){
			cout<<matrixc[s1][s2] ;
			if(s2!=3){cout<< " - ";}
			
			}
			
		cout<<endl;
	}
	
	
	
	
	return 0;
}

