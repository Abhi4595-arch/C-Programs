#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c,D,R1,R2,REAL,IMAGINARY;
	printf("Enter the Coeff a : ");
	scanf("%lf",&a);
	printf("Enter the Coeff b : ");
	scanf("%lf",&b);
	printf("Constant : ");
	scanf("%lf",&c);
	D=b*b-4*a*c;
	if(D>0)
	{
		R1=(-b+sqrt(D))/(2*a);
		R2=(-b-sqrt(D))/(2*a);
		printf("The Roots are %.2lf and %.2lf",R1,R2);
	}
	else if(D==0)
	{
		R1=(-b)/(2*a);
		R2=(-b)/(2*a);
		printf("The Roots are %.2lf and %.2lf",R1,R2);i
	}
	else
	{
		REAL=(-b)/(2*a);
		IMAGINARY=(sqrt(-D))/(2*a);
		printf("The Roots are %.2lf+%.2lfi and %.2lf-%.2lfi",REAL,IMAGINARY,REAL,IMAGINARY);
	}
	return 0;
}