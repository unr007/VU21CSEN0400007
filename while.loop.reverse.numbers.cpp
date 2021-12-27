#include<stdio.h>
main()
{
int n,i=1,d,r=0;
printf("enter a number");
scanf("%d",&n);
while (n>0)
{
d=n%10;
r=r*10+d;
n=n/10;
printf("%d",r);
}
}
