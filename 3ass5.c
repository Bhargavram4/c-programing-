#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int main()
{
    char str[MAX_SIZE];
    int i, j, max, len, freq;
    char ch;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    len = strlen(str);

    // Find maximum occurring character in the string
    max = 0;
    for(i=0; i<len; i++)
    {
        freq = 1;
        for(j=i+1; j<len; j++)
        {
            if(str[i] == str[j] && str[i] != ' ')
            {
                freq++;
            }
        }

        if(freq > max)
        {
            max = freq;
            ch = str[i];
        }
    }

    printf("Highest frequency character in the string = '%c'\n", ch);
    printf("It occurs %d times.\n", max);

    return 0;
}
