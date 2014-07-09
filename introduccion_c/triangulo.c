#include <stdio.h>
int n=5;
int j=0;
int i=0;
int main()
{
	for (i=0; i<=n;i++)
	{
		for(j=0;j<i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}