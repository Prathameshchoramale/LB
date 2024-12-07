#include<stdio.h>

void number(int ino)
{
    if(ino<50)
    {
        printf("Small");
    }
    else if (ino<=100)
    {
        printf("Medium");
    }
    else
    {
        printf("Large");
    }
}

int main()
{
    int ivalue = 0;

    printf("Enter number\n");
    scanf("%d",&ivalue);

    number(ivalue);

    return 0;
}