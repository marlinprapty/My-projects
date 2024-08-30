#include <stdio.h>
int main()
{
 char M;
printf("Enter a character : ");
scanf("%c", &M);


if (M == 'a' || M =='e' || M =='i'|| M =='o' || M =='u' || M == 'A' || M =='E' || M =='I'|| M =='O' || M =='U')
{
   printf("%c is a vowel", M);
}

else
{
   printf("%c is a consonant", M);
}

    return 0;
}
