#include <stdio.h>
int n;
int main()
{
	printf("Dame tu edad:");
	scanf("%d",&n);
	if(n>=18){printf("Pudes votar \n");}
		else
		{printf("Aun no puedes votar \n");}
	return 0;
}