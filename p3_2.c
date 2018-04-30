/*
* C Program to Add, Subtract, multiply, divide and modulo two numbers
* using function
*/
#include<stdio.h>
int getSum(int a,int b)
{
return a+b;
}
int getDiff(int a,int b)
{
return a-b;
}
int getProd(int a,int b)
{
return a*b;
}
int getQuo(int a,int b)
{
return a/b;
}
int getRem(int a,int b)
{
return a%b;
}
int main()
{
int a,b,res;
printf("Enter two numbers :");
scanf("%d %d",&a,&b);
printf("Sum :%d\n",getSum(a,b));
printf("Difference :%d\n",getDiff(a,b));
printf("Product :%d\n",getProd(a,b));
printf("Quotient :%d\n",getQuo(a,b));
printf("Remainder :%d\n",getRem(a,b));
return 0;

}
