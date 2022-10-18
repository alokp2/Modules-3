#include<stdio.h>
int main()
{
    int week;
    printf("Enter the particular number (1-7) to find out the day of the week: ");
    scanf("%d",&week);

    switch(week){
    case 1: printf("\nToday is Monday");
            break;
    case 2: printf("\nToday is Tuesday");
            break;
    case 3: printf("\nToday is Wednesday");
            break;
    case 4: printf("\nToday is Thursday");
            break;
    case 5: printf("\nToday is Friday");
            break;
    case 6: printf("\nToday is Saturday");
            break;
     case 7: printf("\nToday is Sunday");
            break;
    
    default:
    printf("The number= %d is out of the week range (1-7)",week);
    }
return 0;
}

