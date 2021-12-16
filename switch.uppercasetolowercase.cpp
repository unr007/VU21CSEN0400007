/ *upper case to lower case*/
#include<stdio.h>
main()
{
char xy;
printf("Enter a Value");
scanf("%c",&xy);
switch(xy)
{
case 'A'...'Z':
xy=xy+32;
printf("After convertion %c",xy);
break;
case 'a'...'z':
xy=xy-32;
printf("After convertion %c",xy);
break;
case '1'...'9':
printf("     its a number");
break;
default:
printf("    its special !!!");
}	
}
