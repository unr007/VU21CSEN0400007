#include<stdio.h>
main()
{
int a,b;
printf("enter a,b value");
scanf("%d%d",&a,&b);
switch(a)
{
case '+' : printf("%d is the sum \n",a+b);
case '-' : printf("%d is the differance \n",a-b);
case '*' : printf("%d is the product \n",a*b);
case '/' : printf("%d is the Quotient \n",a/b);
case '%' : printf("%d is the reminder ",a%b);
break;
default : printf("%d is the sum \n",a+b);
 printf("%d is the differance \n",a-b);
 printf("%d is the product \n",a*b);
 printf("%d is the Quotient \n",a/b);
 printf("%d is the reminder ",a%b);
}
}
