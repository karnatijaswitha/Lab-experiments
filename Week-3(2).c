#include<stdio.h>
#include<math.h>
void main()
{
 float p,t,r,ci;
 printf("Enter principal amount,time,periods,rate of interest :");
 scanf("%f%f%f",&p,&t,&r);
 ci= p*pow(1+r/100,t)-p;
 printf("/n compound interest= %.2f",ci);
 }