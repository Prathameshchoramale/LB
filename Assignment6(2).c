#include<stdio.h>

void Display(int ino)
{
    printf("%c",ino);
}

int main()
{
    int ivalue = 0;

    printf("Enter number");
    scanf("%d",&ivalue);

    Display(ivalue);

    return 0;
}