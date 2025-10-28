#include<stdio.h>
int main()
{
	float C,F;
	printf("Enter Fahrenheit Temperature : ");
	scanf("%.2lf",&F);
	C=(F-32)*0.55;
	printf("Celsius Temperature : %.2lf",C);
	return 0;
}