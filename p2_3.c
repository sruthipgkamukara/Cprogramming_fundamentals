/*
* C Program to Add two numbers using pointers
*/
#include<stdio.h>
int getSum(int* a , int * b)
{
return *a+*b;

}

int main(){
int a,b;
scanf("%d %d",&a,&b);
printf("Sum of %d and %d is %d\n",a,b,getSum(&a,&b));
return 0;
}
