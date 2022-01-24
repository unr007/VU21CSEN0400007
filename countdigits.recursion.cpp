#include <stdio.h>
int CD(int num)
{
    static int count=0;
     
    if(num>0)
    {
        count++;
        CD(num/10);
    }
    else
    {
        return count;
    }
}
int main()
{
    int number;
    int count=0;
     
    printf(" number: ");
    scanf("%d",&number);
     
    count=CD(number);
     
    printf(" %d",count);
     
    return 0;
}
