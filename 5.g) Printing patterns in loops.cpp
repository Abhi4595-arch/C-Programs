#include <stdio.h>
int main() {
 int rows, spaces, stars,i;
 printf("Enter the number of rows: ");
 scanf("%d", &rows);
 for (i = 1; i <= rows; i++) {
 // Print spaces
 for (spaces = 1; spaces <= rows - i; spaces++) {
 printf(" ");
 }
 // Print stars
 for (stars = 1; stars <= 2 * i - 1; stars++) {
 printf("*");
 }
 printf("\n");
 }
 return 0;
} 
