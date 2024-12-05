Name. kaif barudgar
roll no 47
 uin . 241S063
// printing the elements of an array in reverse order using pointers
include <stdio.h>
int mai#n() {
 int n;
 printf("Enter the number of elements in the array: ");
 scanf("%d", &n);
 int arr[n];
 int *ptr = arr;
 printf("Enter %d elements:\n", n);
 for (int i = 0; i < n; i++) {
 scanf("%d", ptr + i);
 }
 printf("Array elements in reverse order:\n");
 for (int i = n - 1; i >= 0; i--) {
 printf("%d ", *(ptr + i));
 }
 printf("\n");
 return 0;
}
output
enter the number of element array : 3
 enter array elements : 1
 2
 3
 3 2 1
 */
