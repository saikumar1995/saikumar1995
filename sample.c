#include<stdio.h>

int num()
{
	int n;
	scanf("%d",&n);
	return n;
}

int main()
{
	int a;

	printf("Enter a num\n");

	a=num();
	printf("The number is %d\n",a);
	return 0;
}
