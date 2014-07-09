#include <stdio.h>

int j;
int i;
int k;
int n;

int main()
{
	printf("valor de n:");
	scanf("%d",&n);
	int var=1;

	for(i=n;i>0;i--){
		for(k=i;k>0;k--){printf(" ");}
		for(j=0;j<var;j++)
		{
			printf("*");
		}
		var=var+2;
		printf("\n");
	}
	return 0;
}