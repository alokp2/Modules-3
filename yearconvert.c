#include<stdio.h>
int main()
{
    int years,days;
    printf("Enter number of year: \n");
    scanf("%i",&years);
    int convert_to_days = years*365;
    printf("Total days in given years: %i\n",convert_to_days);
    // to convert days into years
    printf("Enter number of days: \n");
    scanf("%d",&days);
    int convert_to_years = days/365;
    printf("The number of years based on days is %i years\n",convert_to_years);
    return 0;
}