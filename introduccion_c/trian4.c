#include <stdio.h>
int n=5;
int j=0;
int i=0;
int k=0;
int main()
{
	int var=1;
	for(i=n;i>0;i--){
		for(j=0;j<var;j++)
		{
			printf(" ");
		}
		for(k=i;k>0;k--)
			{
				printf("*");
			}
		var=var+1;
		printf("\n");
	}	
	return 0;
}
