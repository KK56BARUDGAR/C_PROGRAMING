name.. kaif barudgar
roll no.. 47
 uin..241S063
// adding two numbers using pointers
#include <stdio.h>
int main() {
 int num1, num2, sum;
 int *ptr1, *ptr2, *ptrSum;
 printf("Enter the first number: ");
 scanf("%d", &num1);
 printf("Enter the second number: ");
 scanf("%d", &num2);
 ptr1 = &num1;
 ptr2 = &num2;
 ptrSum = &sum;
 *ptrSum = *ptr1 + *ptr2;
 printf("Sum of %d and %d is %d\n", *ptr1, *ptr2, *ptrSum);
 return 0;
}

output
Enter the first number: 24
Enter the second number: 23
Sum of 24 and 23 is 47
