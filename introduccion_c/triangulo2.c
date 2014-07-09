#include <stdio.h>
int n=5;
int j=0;
int i=0;
int main()
{
	for (i=n; i>0;i--)
	{
		for(j=i;j>0;j--)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}