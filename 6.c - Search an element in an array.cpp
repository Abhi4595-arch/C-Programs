#include<stdio.h>
int main()
{
	int n,i,key;
	printf("Enter Array Size : ");
	scanf("%d",&n);
	int a[n];
	printf("Enter Array Elements : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter Key element to search : ");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(a[i]==key)
		{
			printf("%d is present at location %d",key,i);
			break;
		}
	}
	if(a[i]!=key)
	{
		printf("The gien key element %d is not Present in the Given array.",key);
	}
	return 0;
}