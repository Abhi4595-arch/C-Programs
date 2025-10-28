#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter Two Numbers : ");
	scanf("%d%d",&a,&b);
	printf("Bitwise Operators:");
	printf("\nBitwise AND (&)\n%d & %d = %d",a,b,a&b);
	printf("\nBitwise OR (|)\n%d | %d = %d",a,b,a|b);
	printf("\nBitwise XOR (^)\n%d ^ %d = %d",a,b,a^b);
	printf("\nLeft Shift (<<)\n%d << %d = %d",a,b,a<<b);
	printf("\nRight Shift (>>)\n%d >> %d = %d",a,b,a>>b);
	return 0;
}