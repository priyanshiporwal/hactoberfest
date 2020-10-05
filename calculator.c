#include <stdio.h>
int sum(int a,int b)
{
	return a+b;
}
int diff(int a,int b)
{
	return b-a;
}
int main()
{
	int a,b;
	printf("enter two values\n");
	scanf("%d %d",&a,&b);
	printf("Sum = %d\n",sum(a,b));
	printf("Difference = %d\n",diff(a,b));
	return 0;
}

