/* 
 * C program to calculate simple interest 
 */ 
   
#include<stdio.h>
int main()
{
float pri,rat,time,si;
printf("Enter the principal amount :");
scanf("%f",&pri);
printf("Enter the rate of interest :");
scanf("%f",&rat);
printf("Enter the time in years :");
scanf("%f",&time);

si=(pri*rat*time)/100;
printf("Simple Interest : %.2f\n",si);
return 0;
}
