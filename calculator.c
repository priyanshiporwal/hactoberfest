include <stdio.h>
int diff(int a,int b)
{
	return b-a;
}
int main()
{
	int a=5,b=10;
	printf("Sum = %d",sum(a,b));
	printf("Difference = %d",diff(a,b));
	return 0;
}
