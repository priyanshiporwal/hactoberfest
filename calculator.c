include <stdio.h>
int sum(int a,int b)
{
	return a+b;
}
int main()
{
	int a=5,b=10;
	printf("Sum = %d",sum(a,b));
	printf("Difference = %d",diff(a,b));
	return 0;
}
