#include<stdio.h>
int main()
{
char x;
int y,amount;
printf("please place ur order");
printf("Enter B for Burger \n F for French fries \n P fpr Pizza \n S for sandwich \n enter now :");
scanf("%c",&x);
printf("Enter the Quality");
scanf("%d",&y);
switch(x)
{
case 'B' : printf("Pay %d for Burgers",amount = y*200);
break;
case 'F' : printf("Pay %d for Fries",amount = y*50);
break;
case 'P' : printf("Pay %d for Pizza ",amount =y*500);
break;
case 'S' : printf("Pay %d for sandwich ",amount=y*150);
break;
default : printf("error!!!!");
}
}
