#include<stdio.h>

double SquareMeter(int ivalue)
{
    double darea =0.0;
    darea= ivalue*0.0929;
    return darea;
    
}

int main()
{
    int ivalue =0;
    double dret =0.0;

    printf("Enter area in Square feet\n");
    scanf("%d",&ivalue);

    dret= SquareMeter(ivalue);

    printf("Meter is : %f\n",dret);
    
    return 0;
}