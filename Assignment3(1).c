#include<stdio.h>

void printEven(int ino)
{
    int icnt = 0,ieven = 2;
    if(ino<=0)
    {
        return;
    }
    for(icnt=1;icnt<=ino;icnt++)
    {
        printf("%d\n",ieven);
        ieven +=2;
    }
}

int main()
{
    int ivalue =0;
    printf("entee number\n");
    scanf("%d",&ivalue);

    printEven(ivalue);

    return 0;
}