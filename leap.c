#include<stdio.h>
int main(){
    int year;
    printf("Enter a year ");
    scanf("%i",&year);
    if(year%4==0)
    {
        printf("Leap Year!!");
    }
    else
    {
        printf("It is not a leap year!!");
    }
    return 0;
}