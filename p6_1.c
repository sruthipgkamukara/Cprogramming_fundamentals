/*
* C Program to add N numbers
*/
#include<stdio.h>
int main()
{
int n,sum=0,a;
printf("Enter the value of n :");
scanf("%d",&n);
int i;
for(i=0;i<n;i++)
{
scanf("%d",&a);
sum=sum+a;
}
printf("Sum of %d numbers is %d\n",n,sum);
return 0;

}
