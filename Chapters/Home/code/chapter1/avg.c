/* avg.c: Averages 2 integers */
#include <stdio.h>

int main() {
    int num1, num2;
    float sum;
    
    puts("Enter the 1st number:");
    scanf("%d",&num1);
    puts("Enter the 2nd number:");
    scanf("%d",&num2);
    
    sum = num1 + num2;
    printf("The average is %f\n", sum/2);
    return 0;
}

