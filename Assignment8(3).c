#include<stdio.h>

int KMtoMeter(int iNo)
{
    int imeter =0;;
    imeter= iNo*1000;
    return imeter;
    
}

int main()
{
    int ivalue =0,iret =0;

    printf("Enter distance \n");
    scanf("%d",&ivalue);

    iret= KMtoMeter(ivalue);

    printf("Meter is :\n %d",iret);
    
    return 0;
}