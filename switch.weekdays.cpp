#include<stdio.h>
int main ()
{
int a;
printf("Enter a number in the range of 1 to 7   :    ");
scanf("%d",&a);
switch(a)
{
case 1 : printf("sunday");
break;
case 2 : printf("monday");
break;
case 3 : printf("thuesday");
break;
case 4 : printf("wednesday");
break;
case 5 : printf("Thursday");
break;
case 6 : printf("friday");
break;
case 7 : printf("saturday");
default :printf("number entered is not in the range of 1 to 7");

}
}
