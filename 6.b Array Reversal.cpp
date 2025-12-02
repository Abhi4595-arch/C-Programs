#include<stdio.h>
int main()
{
	int n;
	printf("Enter Array Size : ");
	scanf("%d",&n);
	int a[n];
	printf("Enter Array Elements : ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Reverse of the Array : ");
	for(int i=n-1;i>=0;i--)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}