/*
*C program to print digits of a number in words
*/

#include<stdio.h>
int power(int a,int b)
{int res=1;
for(int i=1;i<=b;i++)
res*=a;
return res;

}
int main()
{
int n;
scanf("%d",&n);
int m=n,c=0;
while(m!=0)
{
c++;
m/=10;
}
c=c-1;int d;
while(n!=0)
{
d=n/power(10,c);
n=n%power(10,c);
switch(d)
{
case 0:
printf("Zero ");
break;
case 1:
printf("One ");
break;

case 2:
printf("Two ");
break;

case 3:
printf("Three ");
break;

case 4:
printf("Four ");
break;

case 5:
printf("Five ");
break;

case 6:
printf("Six ");
break;

case 7:
printf("Seven ");
break;


case 8:
printf("Eight ");
break;

case 9:
printf("Nine ");
break;

}//switch

c--;
}//while
printf("\n");
return 0;





}
