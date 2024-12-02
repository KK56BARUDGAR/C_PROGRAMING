 /*
 EXP NO : 8.1
 TITLE : WAP TO FIND the length of a string without using library function
 NAME : kaif barudgar
 UIN :241S063
 Roll.No:47
 CLASS & DIV :F.E -ECS ENG(E3) */

#include <stdio.h>
int main() {
 char str[100];
 int length = 0;
 printf("Enter a string: ");
 scanf("%s", str);
 while (str[length] != '\0') {
 length++;
 }
 printf("The length of the string is: %d\n", length);
 return 0;
}
/*
OUTPUT :
Enter a string: hello world
The length of the string is: 5
*/
