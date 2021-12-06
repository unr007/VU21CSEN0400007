#include<stdio.h>
int main()
{
int a,K;
printf("Enter a value");
scanf("%d",&a);
K=a%2;
switch (K)
{
case 0 :printf("Even Number");
break;
case 1 :printf("Odd Number");
break;
default:printf("enter a valid number");
}
}
