#include <stdio.h>
int factorial(int n){
	if(n==0)
	{
		return 1;
	}
	else{
		return n*factorial(n-1);
	}
	return 0;
}
int main()
{
	int n;
	int fact;
	printf("valor de n:");
	scanf("%d",&n);
	fact=factorial(n);
	printf("El factorial de n es %d:",fact);
	return 0;
}