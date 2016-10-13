#include <stdio.h>
#include <iostream>


int main(void){
	
	
	char f[3][80];
	char *pf[3];

	for(int i=0;i<3;i++){
		
		pf[i]=&f[i][0];
	
	}
		
	char **ppf=pf;

	for(int i=0;i<3;i++){

		while(((**ppf)=getchar())!='\n')
		(*ppf)++;
		(**ppf)='\0';
		*ppf=f[i];
		ppf++;
	}
// Hier Ihre Lösung

	ppf=pf;

	int buffer=0;
	for(int i=0;i<3;i++){
		while (**ppf!='\0'){
			//std::cout<<**ppf;			
			//zähle fhs in line
			if (**ppf=='f' && *((*ppf)+1)=='h' && *((*ppf)+2)=='s'){
			buffer++;
			}
		(*ppf)++;
		}
	ppf++;
	std::cout<<buffer<<"\n";
	buffer=0;
	}


}
