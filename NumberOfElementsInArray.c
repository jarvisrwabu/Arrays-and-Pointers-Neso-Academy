#include <stdio.h>
/**
*main - Starting point
*
*Return - 0 (Success)
**/
int main()
{
    int arr[] = {3,4,2,3,4,2};
    int number;// Also problems
    number = sizeof(arr)/sizeof(arr[0]); //Does not work, dont know why
    printf("The number of elements is: %d\n");
    printf("Size of array: %d\n", sizeof(arr));
    printf("Size of one value of array: %d\n", sizeof(arr[0]));
    printf("Number of elements: %d\n", sizeof(arr)/sizeof(arr[0]));
    return (0);
}
