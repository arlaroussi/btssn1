#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char* argv[])   {

        char s[100];
        char *p,*q;
        int estPalin = 1;

        printf("Entrez une chaine de cacacrteres: ");
        gets(s);

        p=s;
        q=s+strlen(s)-1;

        for(;p<q;p++,q--)
        {
            if(*p != *q)
            {
              estPalin = 0;
                break;
           }
        }
        if(estPalin == 1) printf("La chaine est palidrome.\n");

        else printf("La chaine n'est pas palidrome.\n");

        system("pause");

        return 0;

    }

