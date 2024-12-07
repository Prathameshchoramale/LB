#include<stdio.h>

void display(int iNo)
{

    if(iNo<10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
    }
}

int main()
{
   int ivalue = 0;

   printf("Enter number");
   scanf("%d\n",&ivalue);

   display(ivalue);

    return 0;
}