#include<stdio.h>
int main()
{
	int u,a,t;
	float s;
	printf("Enter Intial Velocity (u) : ");
	scanf("%d",&u);
	printf("Enter Acceleration (a) : ");
	scanf("%d",&a);
	printf("Enter Time (t) : ");
	scanf("%d",&t);
	s=(u*t)+(a*t*t)*0.5;
	printf("Distance = %.2f",s);
	return 0;
}