#include <stdio.h>
/**
*main - Starting point
*
*Return - 0 (Success)
**/
int main()
{
    int twodarr[5][5];
    int i, j;
    for (i = 0; i < 5; i++)
    {
        printf("Enter Row %d values: \n", i + 1);
        for (j = 0; j < 5; j++)
        {
            scanf("%d", &twodarr[i][j]);
        }
    }
    printf("The 2D array values are:\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%d ", twodarr[i][j]);
        }
        printf("\n");
    }
    /* The row sum total: */
    for (i = 0; i < 5; i++)
    {
        int rsum = 0; /* Reset the sum value everytime!! */
        for (j = 0; j < 5; j++)
        {
            rsum += twodarr[i][j];
        }
        printf("Row %d sum = %d\n", i + 1, rsum);
    }
     /* The Column sum total: */
    for (j = 0; j < 5; j++) /* Reversed the order of the loop to get column sum, Keeping Column index static */
    {
        int csum = 0; /* Reset the sum value everytime!! */
        for (i = 0; i < 5; i++)
        {
            csum += twodarr[i][j];
        }
        printf("Column %d sum = %d\n", j + 1, csum);
    }
    // Calculate and print the sum of rows and columns Using a single loop structure
    for (i = 0; i < 5; i++)
    {
        int rsum = 0;
        int csum = 0;

        for (j = 0; j < 5; j++) {
            rsum += twodarr[i][j];
            csum += twodarr[j][i];
        }

        printf("Row %d sum = %d\n", i + 1, rsum);
        printf("Column %d sum = %d\n", i + 1, csum);
    }
    return (0);
}
