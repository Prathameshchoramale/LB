#include<stdio.h>

int DollarToINR(int iNo)
{
    int iresult=0;
    iresult= iNo*70;
    return iresult;
}

int main()
{
    int ivalue =0, iret =0;

    printf("Enter of USD\n");
    scanf("%d",&ivalue);

    iret= DollarToINR(ivalue);

    printf("Value of INR is \n %d",iret);

    return 0;
}