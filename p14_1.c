/*
*C program to find total, average and percentage marks of subjects
*/
#include<stdio.h>
int main()
{
int no;double sum=0.0,avg,per,mar;
scanf("%d",&no);
for(int i=0;i<no;i++)
{
scanf("%lf",&mar);
sum+=mar;

}
avg=sum/no;

printf("Total marks : %lf\n",sum);
printf("Average marks : %lf\n",avg);
printf("Percentage marks : %lf %% \n",avg);
return 0;



}
