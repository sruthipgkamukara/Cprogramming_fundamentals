/*
* C Program to print fibonacci series 
*/

#include<stdio.h>
int main()
{
int f=0;
int s=1;
int c=3,n;
scanf("%d",&n);
printf("%d	%d",f,s);
for(;;)
{
int t=f+s;
printf("	%d",t);
c++;
if(c>n)
break;
f=s;
s=t;





}
printf("\n");
return 0;








}
