#include <stdio.h>
#include <string.h>

typedef unsigned char binary;
typedef unsigned int num;

int converter(const char*);

int main(void)
{
char * bin = "1000";
printf("binary: %s	decimal: %d\n",bin,converter(bin)); 	
	
}

int converter(const char *str)
{
num result = 0;

for(int i = strlen(str)-1,j=0; i >= 0; i--, j++)
{
	binary k = str[i]-"0";
	k <<= j; 
	result +=k;
	}	
	return result;
}

