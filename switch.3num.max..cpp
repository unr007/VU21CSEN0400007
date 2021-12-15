#include<stdio.h>
main()
{
float a,b,c;
printf("Enter 3 Numbers\n");
scanf("%f%f%f",&a,&b,&c);
switch(a>b&&a>c)
{
case 1:
	printf("%f is max.",a);
	break;
case 0:
	switch(b>c)
	{
	case 1 : printf("%f is max.",b);
	break;
	case 0 : printf("%f is max.",c);
	break;
	}
}
}
