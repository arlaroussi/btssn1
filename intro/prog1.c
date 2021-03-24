#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {

int i;
char var[8] = "Bonjour";

for (i=0 ; i <= 8 ; i++)
{
	printf("%c\n", var[i]);
}

return 0;
}
