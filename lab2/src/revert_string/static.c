#include <string.h>

void RevertString1(char *str)
{
	char ch=' ';
	int N=(strlen(str));
	for (int i=0; i<N/2; i++)
	{
	    ch=str[i];
	    str[i]=str[N-i-1];
	    str[N-i-1]=ch;
	}
}
