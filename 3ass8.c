#include <stdio.h>
#include <string.h>

void swap(char *x, char *y) {
   char temp;
   temp = *x;
   *x = *y;
   *y = temp;
}

void permute(char *str, int start, int end) {
   int i;
   if (start == end)
      printf("%s\n", str);
   else {
      for (i = start; i <= end; i++) {
         swap((str + start), (str + i));
         permute(str, start + 1, end);
         swap((str + start), (str + i));
      }
   }
}

int main() {
   char str[100];
   printf("Enter a string: ");
   fgets(str, 100, stdin);
   str[strcspn(str, "\n")] = '\0';  // remove trailing newline from fgets
   printf("All permutations of the string are: \n");
   permute(str, 0, strlen(str) - 1);
   return 0;
}
