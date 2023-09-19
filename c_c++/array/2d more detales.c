/*
#include <stdio.h>

int main() {
    int table[10][10];
    int i, j, n;

    // Generating multiplication table
    for (i = 1; i <= 10; i++) {       // Outer loop for rows (1 to 10)
        for (j = 1; j <= 10; j++) {   // Inner loop for columns (1 to 10)
            table[i - 1][j - 1] = i * j; // Store multiplication result in the array
        }
    }

    // Getting user input
    scanf("%d", &n);

    // Displaying multiplication table for user's input
    for (i = 1; i <= 10; i++) {                 // Loop through rows (1 to 10)
        printf("%d x %d = %d\n", n, i, table[n - 1][i - 1]); // Print multiplication result
    }

    return 0;
}
*/
#include <stdio.h>

int main() {
    int arr[2][3]={{145,55,77},{643,545,657}};//here [2][3] is size and rest are index

    printf("%d",arr[1][2]);//will print  657



    return 0;
}
