#include<stdio.h>

double CircleArea(float fRadius)
{
    float fArea = 0;
    fArea= 3.14 * fRadius * fRadius;
    return fArea;
    
}

int main()
{
    float fvalue = 0.0;
    double dret = 0.0;

    printf("Enter radius: \n");
    scanf("%f",&fvalue);

    dret= CircleArea(fvalue);

    printf("Area is : %f",dret);
    
    return 0;
}