#include <stdio.h>

int main() {
    float mark1, mark2, mark3, average;
    
    printf("Enter marks for Subject 1 (out of 100): ");
    scanf("%f", &mark1);

    printf("Enter marks for Subject 2 (out of 100): ");
    scanf("%f", &mark2);

    printf("Enter marks for Subject 3 (out of 100): ");
    scanf("%f", &mark3);
    
    average = (mark1 + mark2 + mark3) / 3;
    
    printf("Average Marks = %.2f\n", average);

    return 0;
}
