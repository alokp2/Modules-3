// Using Ternary operator find even or odd number
#include<stdio.h>
int main()
{
    int a;
    printf("Enter a value of a:");
    scanf("%d",&a);
    
   printf("%s",(a%2!=0)? "odd":"even"); // IF the given condition is true then then it will print odd or else even.
   return 0;
}