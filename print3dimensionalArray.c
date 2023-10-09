#include <stdio.h>
/**
*main - Starting point
*
*Return - 0 (Success)
**/
int main()
{
    /* Program to visualize a Three dimensional Array */
    int i, j, k;
    int threedarr[2][2][3]= {
    {{1,2,3}, {4,5,6}},
    {{7,8,9}, {10,11,12}}}; /* Two 2 dimensional arrays with 2 rows and 3 columns */
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 3; k++)
            {
                printf(" %d ", threedarr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return (0);
}
