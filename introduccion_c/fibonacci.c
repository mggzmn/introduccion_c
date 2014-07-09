#include <stdio.h>
int fibonacci(int n){
	if(n<2)
	{
		return n;
	}
	else{
	return fibonacci(n-1)+fibonacci(n-2);}
}
int main()
{
	int n=0,fib=0,i=0;
	printf("valor de fibonacci a calcular:");
	scanf("%d",&n);
	for(i=0;i<=n-1;i++){
		fib=fibonacci(i);	
		printf("%d",fib);
		printf("\t");
	}
	
	return 0;
}