#include<stdio.h>
void main()
{
int a,b,c,d,e,sum;
float avg;
printf("Enter a,b,c,d,e values:");
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
sum = a+b+c+d+e;
avg = sum/5;
printf("The sum of a,b,c,d,e = %d",sum);
printf("The average of a,b,c,d,e = %f",avg);
}