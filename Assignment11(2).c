#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{

    int iDigit;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo > 0) 
    {
        iDigit = iNo % 10;

        if (iDigit == 0)  
        {
            return TRUE;
        }

        iNo = iNo / 10;
    }

    return FALSE;  
}

int main()
{
    int ivalue = 0;
    BOOL bret = FALSE;

    printf("Enter number \n");
    scanf("%d",&ivalue);

    bret = ChkZero(ivalue);

    if(bret==TRUE)
    {
        printf("It Contains Zero");
    }
    else
    {
        printf("There is no Zero");
    }

    return 0;
}