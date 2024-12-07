#include<stdio.h>

void display(int iNo)
{
    int icnt = 0;

    while(icnt<iNo)
    {
        printf("*");

        icnt++;
    }
}

int main()
{
    int ivalue = 0;

    printf("Enter number : \n");
    scanf("%d",&ivalue);

    display(ivalue);

    return 0;
}