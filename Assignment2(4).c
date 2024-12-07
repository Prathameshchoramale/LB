#include<stdio.h>

void display(int ino,int ifrequency)
{
    int icnt= 0;

    if(ifrequency<0)
    {
        ifrequency = -ifrequency;
    }

    for(icnt=1;icnt<=ifrequency;icnt++)
    {
        printf("%d",ino);
    }
}

int main()
{
    int ivalue =0;
    int icount = 0;

    printf("Enter number: ");
    scanf("%d",&ivalue);

    printf("Enter frequency: ");
    scanf("%d",&icount);

    display(ivalue,icount);

    return 0;
}