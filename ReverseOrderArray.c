#include <stdio.h>
int main(void)
{
    int pop[9] = {34,56,54,32,67,89,90,32,21};
    int i;
    /* Original order of the array */
    for (i = 0; i < 9; i++)
    {
        printf("%d ", pop[i]);
    }
    printf("\n");

    /* Reverse order of the array */
    for (i = 8; i > -1; i--)
    {
        printf("%d ", pop[i]);
    }
    return (0);
}
