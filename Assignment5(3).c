#include<stdio.h>

void Display(int ino)                                //5
{
    int icnt=0;
    for(icnt = -ino;icnt<=ino;icnt++)
    {
        printf("%d",icnt );
    }
}

int main()
{
    int ivalue = 0;
    printf("Enter number\n");
    scanf("%d",&ivalue);

    Display(ivalue);

    return 0;
}