#include <stdio.h>
int sumOfDigits(int num)
{
 if (num == 0)
 {
 return 0;
 }
 return (num % 10) + sumOfDigits(num / 10);
}
int calculateResult(int n, int k) {
 // Base case
 if (n == 0) {
 return 0;
 }
 int sum = sumOfDigits(n);
 int c = sum * k;
 // Recursive call
 return c;
}
int main() {
 int n, k;
 // Input values
 printf("Enter two integers (n and k): ");
 scanf("%d%d", &n, &k);
 // Calculate the result using recursion
 int result = calculateResult(n, k);
 printf("%d\n",result);
 int r1(result);
 printf("%d",r1);
 return 0;
}
int Calres2(int num)
{
 while(num>0)
 {
 int r2= sumOfDigits(num);
 return sumOfDigits(r2);
 }

}
