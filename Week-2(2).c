#include<stdio.h>
void main()
{
 float F,C;
 printf("Enter temperature in F:");
 scanf("%f",&F);
 C=(F-32)*5/9;
 printf("\nTemperature in celsius = %f",C);
 printf("\n Enter temperature in C:");
 scanf("%f",&C);
 F= (C*9/5)+32;
 printf("Temperature in Fahrenheit= %f",F);
}