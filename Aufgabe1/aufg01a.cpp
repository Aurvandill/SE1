#include <iostream>

using namespace std;

void binary (int zahl);

int main(void)
{
	int x =0;
	
	cout<<"bitte geben sie eine Integer Zahl ein die in binär umgewandelt werden soll"<<endl<<"Zahl : ";
	cin>>  x;
	
	binary(x);
		
	return 0;
}

void binary (int zahl){
	
	for (int s=sizeof(zahl)*8-1; s>=0;s--){
		int x =(zahl>>s)&1;
		cout<<x;
		if (s%4==0){
			if (s%8==0){
				cout<<" ";
			} else { cout <<"-";}
		}
	}
	cout << endl;	
}

