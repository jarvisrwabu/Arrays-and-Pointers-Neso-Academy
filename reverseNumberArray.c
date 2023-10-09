#include <stdio.h>
#include <ctype.h>

int main() {
    int n;

    printf("Enter the number of digits you want to reverse: ");
    scanf("%d", &n);

    int arr[n];
    char input[100]; // Assuming a reasonable maximum input length

    for (int i = 0; i < n; i++)
    {
        printf("Enter digit number %d: ", i + 1);
        scanf("%s", input);

        // Check if the input is a valid digit
        int isValid = 1;

        for (int j = 0; input[j] != '\0'; j++) {
            if (!isdigit(input[j])) {
                isValid = 0;
                break;
            }
        }

        if (!isValid || atoi(input) < 0) {
            printf("Invalid input. Please enter a positive digit.\n");
            i--; // Decrement i to re-enter the current digit
        } else {
            arr[i] = atoi(input); // Convert the valid input to an integer
        }
    }

    printf("The number is:\n");

    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
    }

    printf("\n");

    printf("The number in reversed order:\n");

    for (int i = n - 1; i >= 0; i--) {
        printf("%d", arr[i]);
    }

    return 0;
}
