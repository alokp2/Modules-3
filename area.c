// The aim of the program is to find the area of circle, rectangle,and triangle
#include<stdio.h>
int main(){
    float radius;
    printf("Enter the radius ");
    scanf("%f",&radius);
    float formula = (radius*radius)*3.14;
    printf("\nThe area of circle is =%f ",formula);


    return 0;
}