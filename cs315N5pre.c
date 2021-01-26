//contains vulnerabilities
#include <stdio.h>
#include <string.h>

int main(void)
{
    char PassWord[10];
	char GivenWord[10];
    int pass = 0;
	int a=2147483647,b , c;
	
	strncpy(PassWord, "Badcode", 10);
    printf("\nEnter the password : \n");
    scanf("%s",GivenWord);

    if(strcmp(GivenWord, PassWord))
    {
        printf ("\nWrong Password \n");
    }
    else
    {
        printf ("\nCorrect Password ");
		pass = 1;
    }
    if(pass)
    {
       /* user has access */
        printf("\nUser has data access \n");
		printf("\nBank Account Balance: %d", a);
		printf("\nEnter num to add To bank account\n");
		scanf("\n %d", &b);
		
		
		int c = a + b;
		printf("Equals: %d\n", c);
    }
    return 0;
}
