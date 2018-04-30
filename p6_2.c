/*
* C Program to add N numbers using array 
*/
#include<malloc.h>
#include<stdio.h>
int main()
{
int n,sum=0,*arr;
printf("Enter the value of n :");
scanf("%d",&n);
arr=(int *)malloc(sizeof(int)*n);
int i;
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
sum=sum+arr[i];
}
printf("Sum of %d numbers is %d\n",n,sum);
return 0;

}
