#include <stdio.h>
int main()
{
	int a;
    float b;
    char ch;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Enter a floating point value: ");
    scanf("%f\n", &b);
    printf("Enter a character: ");
    scanf("%c", &ch);
    char str[101];
    printf("Enter a string: ");
    scanf("%s", str);
    printf("\n%d\n%f\n%c\n%s", a, b, ch, str);
    return 0;
}

