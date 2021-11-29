#include<stdio.h>
main()
{
int n;
printf("Enter a number");
scanf("%d",&n);
if(n=0)
{
printf("GIVEN NUMBER IS ZERO");
}
else if(n>>0)
{
printf("number is +ve");
}
else if (n<0)
{
printf("number is -ve");
}
}
