#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if(num % 5 == 0 && num % 6 == 0)
        printf("Given number is divisible by both 5 and 6\n");
    else if(num % 5 == 0)
        printf("Given number is only divisible by 5\n");
    else if(num % 6 == 0)
        printf("Given number is only divisible by 6\n");
    else
        printf("Given number is not divisible by 5 or 6\n");

    return 0;
}
