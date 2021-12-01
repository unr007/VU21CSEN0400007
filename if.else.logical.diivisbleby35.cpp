#include<stdio.h>
main()
{
int a;
printf("Please enter a number");
scanf("%d",&a);
if (a%3 ==0 && a%5==0)
{
printf("Divisible by 3&5");
}
else
printf("not divisible b 3&5");
}
