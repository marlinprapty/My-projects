// Program the add numbers until the user enters zero

#include<stdio.h>
int main()
{
    int num, sum = 0;


    // the body of the loop is executed at least once

    do
    {
        printf("Enter a positive integer : ");
        scanf("%d",&num);
        sum = sum + num;

    } 
    while (num !=0);
     printf("sum =%d",sum);
    
    
    return 0;
}
