/* age2.c: Uses a switch */
#include <stdio.h>

int main() {
    int age;
    char really;    // note position
    puts("Enter your age:");
    scanf("%d", &age);
    switch(age/20) {
    case 0:
        puts("youth");
        break;
    case 1:
        puts("prime");
        break;
    case 2:
        puts("aches and pains");
        break;
    case 3:
        puts("golden");
        break;
    default:
        printf("Are you really %d?\n", age);
        scanf(" %c", &really);
        if (really == 'Y' || really == 'y')
            puts("Congratulations!");
        else
            puts("I didn't think so!");
    }
    return 0;
}

            
