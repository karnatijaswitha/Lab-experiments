#include<stdio.h>
void  main()
{
int a,b,c,sum;
float avg;
printf("\nEnter a,b,c values: ");
scanf("\n%d%d%d",&a,&b,&c);
sum = a+b+c;
avg = sum/3;
printf("\n sum of a,b,c is %d",sum );
printf("\n Average of a,b,c is %f", avg);
}