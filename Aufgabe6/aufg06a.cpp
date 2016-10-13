#include <string>
#include <iostream>


using namespace std;


unsigned int lenght(char *s){
	
	unsigned int buffer;
		for (buffer=0; *s != '\0'; s++){
		buffer++;
		}
	return buffer;
	
}


int main(void)
{
	char test[] = "123456789021313";

	cout<< lenght(test);
	
	
	return 0;
}


