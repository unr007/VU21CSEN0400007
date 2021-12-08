#include<stdio.h>
int main ()
{
char a;
printf("enter a value   : ");
scanf("%c",&a);
switch (a)
{
case '0'...'9':printf("its a number");
break;
case 'a'...'z':printf("its a s lettr");
break;
case 'A'...'Z':printf("its a b letter");
break;
default :printf("these are special  ");
}
}
