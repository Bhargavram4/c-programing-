#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int main()
{
    char str1[MAX_SIZE], str2[MAX_SIZE];
    int freq1[26] = {0}, freq2[26] = {0};
    int i, len1, len2, flag = 1;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    len1 = strlen(str1);
    len2 = strlen(str2);

    // Remove newline character from the input strings
    if(str1[len1-1] == '\n')
    {
        str1[len1-1] = '\0';
        len1--;
    }

    if(str2[len2-1] == '\n')
    {
        str2[len2-1] = '\0';
        len2--;
    }

    // Check if both strings have same length
    if(len1 != len2)
    {
        flag = 0;
    }
    else
    {
        // Count frequency of each character in the first string
        for(i=0; i<len1; i++)
        {
            freq1[str1[i] - 'a']++;
        }

        // Count frequency of each character in the second string
        for(i=0; i<len2; i++)
        {
            freq2[str2[i] - 'a']++;
        }

        // Check if both strings have same set of characters
        for(i=0; i<26; i++)
        {
            if(freq1[i] != freq2[i])
            {
                flag = 0;
                break;
            }
        }
    }

    // Print result
    if(flag)
    {
        printf("'%s' and '%s' are anagrams.\n", str1, str2);
    }
    else
    {
        printf("'%s' and '%s' are not anagrams.\n", str1, str2);
    }

    return 0;
}
