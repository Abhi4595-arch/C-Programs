#include<stdio.h>
int main()
{
	char ch;
	double a,b;
	printf("Enter a Character (+,-,*,/) : ");
	scanf("%c",&ch);
	printf("Enter Values of a and b :");
	scanf("%lf%lf",&a,&b);
	switch(ch)
	{
		case'+':
			printf("%.1lf + %.1lf = %.1lf",a,b,a+b);
			break;
		case'-':
			printf("%.1lf - %.1lf = %.1lf",a,b,a-b);
			break;
		case'*':
			printf("%.1lf * %.1lf = %.1lf",a,b,a*b);
			break;
		case'/':
			printf("%.1lf / %.1lf = %.1lf",a,b,a/b);
			break;
		default:
		    printf("Error! Operator is not Correct");
	}                                             
	return 0;
}