#include <stdio.h>
#include <string.h>

void reverse(char *str) {
   int i, j;
   char temp;
   j = strlen(str) - 1;

   for (i = 0; i < j; i++, j--) {
      temp = *(str + i);
      *(str + i) = *(str + j);
      *(str + j) = temp;
   }
}

int main() {
   char str[100];
   printf("Enter any string: ");
   fgets(str, 100, stdin);
   str[strcspn(str, "\n")] = '\0';  // remove trailing newline from fgets

   reverse(str);

   printf("The reverse of the string '%s' is: %s\n", str, str);

   return 0;
}
