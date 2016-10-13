#include <iostream>
#include <fstream>
#include <string>

using namespace std;

unsigned int lenght(string s)
{
	
	unsigned int buffer;
		for (buffer=0; s[buffer] != '\0'; buffer++){
		}
	return buffer;
	
}

int linecount(string filename)
{
	string zeile;
	int counter =0;
	ifstream boote;
	boote.open(filename.c_str());
	if (boote.is_open()){
		
	//ermittle zeilenzahl
	while ( getline (boote,zeile)){
			counter++;
		}
	//eof flag zurücksetzen von ifstream -> zurücksetzen auf anfang der datei
	boote.clear();
	boote.seekg(0, ios::beg);
	boote.close();
	return counter;
	} 
	else {cout << "couldnt open file"<<endl; return 1;}
}

void savetoarray(string filename,string *save){
	//Datei in array speichern
	ifstream boote (filename.c_str());
	string zeile;
	int laufzahl=0;
	if (boote.is_open()){
	while ( getline (boote,zeile)){
			*save = zeile;
			laufzahl++;
			save++;
		}
	boote.close();
	
	}
	else {cout << "couldnt open file"<<endl;}
}

int main(int argc, char **argv)
{
	
	string compare= argv[1]; //strign to compare
	
	int max = linecount("boote.dat");
		
	string array[max];
	
	string *ptr = array;
	
	savetoarray ("boote.dat", ptr);
	
	for (int s = 0; s<max; s++){
		
		int wortlaenge = lenght(array[s])-6;
		if (array[s].compare(6, wortlaenge ,compare) == 0){
			
			cout<< array[s-1]<<endl << array[s]<< endl<<"segel:"<<endl<< array[s+1]<<endl<<array[s+2]<<endl;
			
		}
		
	}
	
}
