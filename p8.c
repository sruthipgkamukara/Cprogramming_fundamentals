/*
* C Program to check a year is leap year or not
*/
#include<stdio.h>
int main()
{
int yr;
scanf("%d",&yr);
if(((yr%400)==0)||((yr%100)!=0 && ((yr%4)==0) ))
printf("L\n");
else
printf("N\n");
return 0;
}
