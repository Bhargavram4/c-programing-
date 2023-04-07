#include <stdio.h>

int isPrime(int num);

int main()
{
    int num, i, flag = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    for(i=2; i<=num/2; i++)
    {
        if(isPrime(i))
        {
            if(isPrime(num-i))
            {
                printf("%d can be expressed as the sum of %d and %d\n", num, i, num-i);
                flag = 1;
            }
        }
    }

    if(flag == 0)
        printf("%d cannot be expressed as the sum of two prime numbers\n", num);

    return 0;
}

int isPrime(int num)
{
    int i;

    if(num == 1)
        return 0;

    for(i=2; i<=num/2; i++)
    {
        if(num % i == 0)
        {
            return 0;
        }
    }

    return 1;
}