#include <stdio.h>
int suma(int a, int b){
	return a+b;
}
int main(){
	int a,b,c;
	printf("valor de A:");
	scanf("%d",&a);
	printf("valor de B:");
	scanf("%d",&b);
	c=suma(a,b);
	printf("la suma es %d",c);
	return 0;
}