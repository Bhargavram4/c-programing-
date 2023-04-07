#include <stdio.h>

int main() {
   int arr1[100], arr2[100];
   int i, n;
   int *ptr1 = arr1, *ptr2 = arr2; // declare two pointers to point to the two arrays

   printf("Enter the size of the array: ");
   scanf("%d", &n);

   printf("Enter the elements of the array:\n");
   for (i = 0; i < n; i++) {
      scanf("%d", ptr1 + i); // read the elements into the first array using pointer arithmetic
   }

   // copy the elements from the first array to the second array using pointer arithmetic
   for (i = 0; i < n; i++) {
      *(ptr2 + i) = *(ptr1 + i);
   }

   printf("Elements of the first array: ");
   for (i = 0; i < n; i++) {
      printf("%d ", *(ptr1 + i)); // print the elements of the first array using pointer arithmetic
   }

   printf("\nElements of the second array: ");
   for (i = 0; i < n; i++) {
      printf("%d ", *(ptr2 + i)); // print the elements of the second array using pointer arithmetic
   }

   return 0;
}
