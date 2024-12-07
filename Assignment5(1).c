#include<stdio.h>

void Display(int ino)
{
    int icnt = 0;

    for (icnt=0;icnt<=ino;icnt++)
    {
       printf("*",ino);
    }
    for (icnt=0;icnt<=ino;icnt++)
    {
       printf("#",ino);
    }



}

int main()
{
    int ivalue =0;

    printf("Enter Number\n");
    scanf("%d",&ivalue);

    Display(ivalue);


    return 0;
}