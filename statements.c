// Program to display a number if it is negative

#include <stdio.h>
int main() 
{
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    // true if number is less than 0
    if (number < 0) {
        printf("You entered negative number");
    }
    

    else if (number > 0) {
        printf("You entered positive number");
    }

    else{

     printf("You entered positive Zero");  

    }
    

    return 0;
}
