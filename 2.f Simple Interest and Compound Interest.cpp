#include<stdio.h>
#include<math.h>
int main()
{
	float P,T,R,SI,CI;
	printf("Enter the Principal Amount : ");
	scanf("%f",&P);
	printf("Enter Time : ");
	scanf("%f",&T);
	printf("Enter the Rate : ");
	scanf("%f",&R);
	SI=(P*T*R)/100.0;
	printf("Simple Interest : %.3f",SI);
	CI=P*(pow(1+(R/100),T)-1);
	printf("Compound Interest : %.3f",CI);
	return 0;
}