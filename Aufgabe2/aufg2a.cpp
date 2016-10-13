#include <iostream>

using namespace std;


int main()
{
	unsigned int x=0;
	cout<<"Zahl : ";
	cin>>x;
	cout<< endl;
	
	if (x==0){		
		x=1;		
	  }
	  
	else {
		
	    if(x>=33){
			cout<<"Fakultaet von x ueberschreitet den Zahlenbereich von int"<<endl; 
			return 0;
		   }
		
		
	    else{
			int z=x;
			for (int s = 1; s<z ;s++){
			   x*=s;
			  }
			}
		}	
	cout <<"Die Fakultaet betraegt : "<<x<<endl;
	return 0;
	
}

