#include<stdio.h>

void Display(int iNo)
{
    if(iNo<0)
    {
      iNo=-iNo;
    }

    int icnt =0;

    for(icnt=1;icnt<=iNo;icnt++)
    {
        printf("*");
    }

    for(icnt=1;icnt<=iNo;icnt++)
    {
        printf("#");
    }
}

int main()
{
    int ivalue = 0;

    printf("Enter number: \n");
    scanf("%d",&ivalue);

    Display(ivalue);

    return 0;
}