#include<stdio.h>

int Countlesssix(int iNo)
{
    int iDigit = 0,icnt = 0;
    
    while(iNo!=0)
    {
        iDigit=iNo%10;
        if(iDigit<6)
        {
            icnt++;
        }
        iNo=iNo/10;
    }
    return icnt;
}


int main()
{
    int ivalue = 0;
    int iret = 0;

    printf("Enter number \n");
    scanf("%d",&ivalue);

    iret = Countlesssix(ivalue);

    printf("%d",iret);

    return 0;
}