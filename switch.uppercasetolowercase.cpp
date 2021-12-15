//upper case to lower case
#include<stdio.h>
main()
{
char xy;
printf("Enter a number");
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
}	
}
