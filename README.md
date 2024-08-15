#include<stdio.h>
#include<stdbool.h>
int main()
{
int number = 90;
float salary = 128900.987;
char name = "B";
double bonousSalary = 2009876.268;
bool married = false;

printf("number:%d\n", number);
printf("salary:%f\n", salary);
printf("name:%c\n", name);
printf("bonousSalary:%lf\n", bonousSalary);
printf("married:%d\n", married);

 char c;
    printf("Enter a character: ");
    scanf("%c", &c);  
    
    // %d displays the integer value of a character
    // %c displays the actual character
    printf("ASCII value of %c = %d", c, c);

int intType;
float floatType;
double doubleType;
char charType;

//size of evalutes the size of a variable
printf("size of int: %zu bytes\n", sizeof(intType));
printf("size of float: %zu bytes\n", sizeof(floatType));
printf("size of double: %zu bytes\n", sizeof(doubleType));
printf("size of char: %zu bytes\n", sizeof(charType));
return 0;
}
