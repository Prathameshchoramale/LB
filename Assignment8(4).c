#include<stdio.h>

double FhtoCs(float ftemp)
{
    float ffahremheit =0.0;
    ffahremheit= (ftemp - 32) * (5.0/9);
    return ffahremheit;
    
}

int main()
{
    float fvalue =0.0;
    double dret =0.0;

    printf("Enter temperature in Fehrenheit\n");
    scanf("%f",&fvalue);

    dret= FhtoCs(fvalue);

    printf("Temperature is:\n %f",dret);
    
    return 0;
}