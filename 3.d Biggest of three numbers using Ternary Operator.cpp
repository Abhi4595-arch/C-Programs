#include<stdio.h>
int main()
{
	int a,b,c,big;
	printf("Enter Values of a,b,c : ");
	scanf("%d%d%d",&a,&b,&c);
	big=a>b?((a>c)?a:c):((b>c)?b:c);
	printf("The Biggest of three numbers is %d",big);
	return 0;
}