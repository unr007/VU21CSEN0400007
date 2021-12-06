#include<stdio.h>
int main()
{
char a,K;
printf("enter the characte    :   ");
scanf("%c",&a);
switch(a)
{
    case 'a':
	case'e':
	case'i':
	case'o':
	case'u':
    case'A':
    case'I':
	case'E':
	case'O':
	case'U':
		printf("Vowel");
		break;
	default :printf("consonent");
}
}
