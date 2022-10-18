//swapping without the third variable
#include<stdio.h>
int main()
{
 int a, b; // b=6, a = 5
 printf("Enter value of a and b: ");
 scanf("%d %d",&a,&b);
 a = a+b;
 b = a-b;
 a = a-b;
 printf("a=%d b = %d",a,b);

}