/* Beispielprogramm Tischrechner

   Version 0

*/

#include <string.h>
#include <ctype.h>
#include <stdio.h>

enum token_value
{
	NAME,			NUMBER,			END,
	PLUS='+',	MINUS='-',		MUL='*',		DIV='/',
	PRINT=';',  ASSIGN='=',		LP='(',		RP=')'
};
token_value	curr_token;

double expr()
{
	double left=term();
	for(;;)
		switch(curr_token)
		{
		case PLUS:
			get_token();
			left+=term();
			break;
		case MINUS:
			get_token();
			left-=term();
			break;
		default:
			return left;
		}
}

double term()
{
	double d;
	double left=prim();
	for(;;)
		switch(curr_token)
		{
		case MUL:
			get_token();
			left*=term();
			break;
		case DIV:
			get_token();
			d=prim();
			if(!d) return error("Division durch Null");
			left/=d;
			break;
		default:
			return left;
		}
}

struct name
{
	char string[30];
	double value;
};
name table[30];
int max_row=0;
char name_string[256];
double number_value;

double prim()
{
	double e;
	switch(curr_token)
	{
	case NUMBER:
		get_token();
		return number_value;
	case NAME:
		if(get_token()==ASSIGN)
		{
			int n=insert(name_string);
			get_token();
			table[n].value=expr();
			return table[n].value;
		}
		return table[look(name_string,0)].value;
	case MINUS:
		get_token();
		return -prim();
	case LP:
		get_token();
		e=expr();
		if(curr_token!=RP) return error(") erwartet");
		get_token();
		return e;
	case END:
		return 1;
	default:
		return error("primary erwartet");
	}
}

token_value get_token()
{
	char c;
	do
	{
		if((c=getchar())==EOF) return curr_token=END;
	} while(c!='\n' && isspace(c));
	switch(c)
	{
	case ';': case '\n':
		return curr_token=PRINT;
	case '*': case '/': case '+': case '-': case '(': case ')': case '=':
		return curr_token=token_value(c);
	case '0': case '1': case '2': case '3': case '4':
	case '5': case '6': case '7': case '8': case '9':
	case '.':
		ungetc(c,stdin);
		scanf("%lg",&number_value);
		return curr_token=NUMBER;
	default:
		if(isalpha(c))
		{
			char* p=name_string;
			*p++=c;
			while((c=getchar())!=EOF)
				if(isalnum(c)) *p++=c;
				else 
				{
					*p='\0';
					break;
				}
			ungetc(c,stdin);
			return curr_token=NAME;
		}
		error("bad token");
		return curr_token=PRINT;
	}
}

int look(const char* p, int ins)
{
	int n;
	for(n=0; n<=max_row; n++)
		if(!strcmp(p,table[n].string)) return n;
	if(!ins) error("name not found");
	strcpy(table[n].string,p);
	max_row=n;
	return n;
}

int insert(const char* s)
{
	return look(s,1);
}

int no_of_errors;
double error(const char* s)
{
	printf("ERROR: %s\n",s);
	no_of_errors++;
	return 1;
}

int main()
{
	table[insert("pi")].value=3.1416;
	table[insert("e")].value=2.7183;
	while(1)
	{
		get_token();
		if(curr_token==END) break;
		if(curr_token==PRINT) continue;
		printf("%lg\n",expr());
	}
	return no_of_errors;
}



