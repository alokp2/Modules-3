//Simple Interest
#include<stdio.h>
int main(){
   float principal ,rate, time;
   printf("Enter the principal: ");
   scanf("%f",&principal);
   printf("Enter the rate: ");
   scanf("%f",&rate);
   printf("Enter the time: ");
   scanf("%f",&time);
   float simple_Interest = (principal*rate*time)/100;
   printf("Simple Interest = %f", simple_Interest);

return 0;

}