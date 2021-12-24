//prefectnumberornot
#include<stdio.h>
main()
{
int i=1,n,s=0;
printf("Enter a number");
scanf("%d",&n);
while (i<n)
{
if (n%i==0)
s=s+i;
i++;
}
{
if (s==n)

printf("its a perfect number");
if (s!=n)

printf("its not a perfect number");}
}

