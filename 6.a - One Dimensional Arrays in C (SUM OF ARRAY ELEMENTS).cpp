#include<stdio.h>
int main()
{
	int n,sum=0;
	printf("Enter Array Size : ");
	scanf("%d",&n);
	int a[n];
	printf("Enter Array Elements : ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(int i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	printf("Sum of Array Elements : %d",sum);
	return 0;
}