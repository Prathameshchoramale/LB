#include<stdio.h>

double RectArea(float fwidth,float fheight)
{
    float fArea = 0;
    fArea= fwidth*fheight;
    return fArea;
    
}

int main()
{
    float fvalue1 = 0.0,fvalue2=0.0;
    double dret = 0.0;

    printf("Enter width: \n");
    scanf("%f",&fvalue1);

    printf("Enter height: \n");
    scanf("%f",&fvalue2);

    dret= RectArea(fvalue1,fvalue2);

    printf("Area of Rectangle is : %f",dret);
    
    return 0;
}