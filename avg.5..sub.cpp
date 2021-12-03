#include<stdio.h>
main()
{
int a,b,c,d,e;
float A,P,J;
printf("enter the marks of five subjects  :   ");
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
J=a+b+c+d+e;
A=(J/5);
printf("Average=%f",A);
P=(J/500)*100;
printf("Persentage=%f",P);
}
