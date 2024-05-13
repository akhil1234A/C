//C Program to Swap Two Numbers

#include <stdio.h>
int main() {
	int a,b,temp;
	
	printf("Enter variables to swap: ");
	scanf("%d%d",&a,&b);
	printf("Variables before swapping a: %d b: %d \n",a,b);
	
	temp=a;
	a=b;
	b=temp;
	printf("Variables after swapping a: %d b: %d",a,b);
	
	
	}
