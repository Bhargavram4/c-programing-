#include <stdio.h>

int main() {
   char str[100];
   int sum = 0, i = 0;

   printf("Enter a string: ");
   fgets(str, 100, stdin);

   while (str[i] != '\0') {
      sum += str[i];
      i++;
   }

   printf("The sum of ASCII values of all characters in the string is: %d", sum);

   return 0;
}
