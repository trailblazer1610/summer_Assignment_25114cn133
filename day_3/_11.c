#include <stdio.h>

int main() {
    int num1, num2, n1, n2, temp;

    // Input two numbers from the user
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Preserve original numbers for final printing
    n1 = num1;
    n2 = num2;

    // Euclidean algorithm logic
    while (n2 != 0) {
        temp = n2;
        n2 = n1 % n2;
        n1 = temp;
    }

    // Output the results
    printf("The HCF of %d and %d is: %d\n", num1, num2, n1);

    return 0;
}
