#include <stdio.h>

int main() {
    int N, a = 0, b = 1, next, i;

    printf("Enter the number of terms (N): ");
    scanf("%d", &N);

    printf("Fibonacci series up to %d terms:\n", N);

    for (i = 1; i <= N; i++) {
        printf("%d\n ", a);
        next = a + b;
        a = b;
        b = next;
    }

    printf("\n");
    return 0;
}
