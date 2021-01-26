//contains vulnerabilities
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char PsWord[10];
    int pass = 0;
	long long int a=2147483647,b , c;
	int val, i;
	char *mem;

    printf("\nEnter the password : \n");
    fgets(PsWord, sizeof(PsWord)-2, stdin);
	printf("%s",PsWord);
	//for()
    if(strcmp(PsWord, "badcode") == 0)
    {
        printf ("\nCorrect Password ");
		pass = 1;
    }
    else
    {
        printf ("\nWrong Password \n");
    }
    if(pass)
    {
       /* user has access*/
        printf("\nUser has data access \n");
		printf("\nBank Account Balance: %lld", a);
		printf("\nEnter num to add To bank account\n");
		scanf("\n %lld", &b);
		long long int c = a + b;
		
		printf("Equals: %lld\n", c);
    }
    return 0;
}
