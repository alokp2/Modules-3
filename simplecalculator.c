//Simple Calculator
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two numbers to add\n ");
    scanf("%d ",&a);
    scanf("%d",&b);
    printf("a=%d\n b=%d\n Total output= %d\n",a,b,a+b);
    printf("a=%d\n b=%d\n Total output= %d\n",a,b,a-b);
    printf("a=%d\n b=%d\n Total output= %d\n",a,b,a*b);
    printf("a=%d\n b=%d\n Total output= %d\n",a,b,a/b);
    printf("a=%d\n b=%d\n Total output= %d\n",a,b,a%b);

    return 0;
}
