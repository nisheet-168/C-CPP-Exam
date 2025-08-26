#include <stdio.h>

int main() {
    int N, i = 2;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    printf("Even numbers from 1 to %d are:\n", N);

    while (i <= N) {
        printf("%d ", i);
        i += 2;
    }

    printf("\n");

    return 0;
}
