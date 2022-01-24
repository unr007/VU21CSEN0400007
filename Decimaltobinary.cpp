#include<stdio.h>
int d_b(int n)
{
if (n==0)
return 0;
else
return((n%2)+10*d_b(n/2));
}
int main()
{
int no;
printf("number");
scanf("%d",&no);
printf("Deciamal(%d)= Binary(%d)",no,d_b(no));
}
