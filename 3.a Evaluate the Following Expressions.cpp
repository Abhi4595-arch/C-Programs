#include<stdio.h>
int main()
{
	int a=5,b=2,i=3,j;
	float c=3.5;
	double d=2.0,r;
	r=(a/b*c)-b+(a*d/3);
	printf("Expression 1 Result = %.2lf",r);
	j=(i++)+(++i);
	printf("Expression 2 Result = %d",j);
	return 0;
}