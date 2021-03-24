#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int n;
void fonction ();

void fonction ()
{
	n++;
	printf("appel numero %d\n",n);
	return;
}

void main()
{
	int i;
	n=25;
	for (i = 0; i < 5; i++)
	fonction();
}
