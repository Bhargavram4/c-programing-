#include <stdio.h>

int isPrime(int num);

int main()
{
    int lower, upper, i, flag;

    printf("Enter two numbers (intervals): ");
    scanf("%d %d", &lower, &upper);

    printf("Prime numbers between %d and %d are: ", lower, upper);

    for(i=lower+1; i<upper; i++)
    {
        flag = isPrime(i);

        if(flag == 1)
            printf("%d ",i);
    }

    return 0;
}

int isPrime(int num)
{
    int i;

    for(i=2; i<=num/2; i++)
    {
        if(num % i == 0)
        {
            return 0;
        }
    }

    return 1;
}
