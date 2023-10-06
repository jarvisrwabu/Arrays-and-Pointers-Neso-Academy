#include <stdio.h>
/**
*main - Starting point
*
*Return - 0 (Success)
**/
int main()
{
    /* This program checks if the input number repeats itself*/
    int checker[10] = {0}; //There are always 10 possible digits
    int rem, n;
    printf("Enter the number to check: ");
    scanf("%d", &n);


    while (n > 0)
    {
        rem = n % 10;
        if (checker[rem] == 1)
        {
            break;
        }
        checker[rem] = 1;
        n = n / 10;
    }

    if (n > 0)
    {
        printf("Yes there is a number repeating.\n");
    }
    else
    {
        printf("There is no any repeating number.\n");
    }
    return (0);
}
