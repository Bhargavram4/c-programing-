#include<stdio.h>
#include<ctype.h>

int main()
{
     char c;
     printf ("Enter a character n");
     scanf ("%c", &c);

     if (isupper(c))
     {
            printf ("It is UPPERCASE character");
     }
     else if (islower(c))
     {
           printf ("It is lowercase character");
     }
     else 
     {
           printf("It is not a character"); 
     }

     return 0;

}
