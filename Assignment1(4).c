#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

int check (int iNo)
{
    if((iNo%5)==0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bret = FALSE;

    printf("Enter the number");
    scanf("%d",&iValue);

    bret = check(iValue);

    if(bret==TRUE)
    {
        printf("divisible by 5");
    }
    else
    {
        printf("not divisible by 5");
    }



    return 0;
}