#include<stdio.h>

void MultipleDisplay(int ino)                                
{
    int icnt=0,imul = 0;
    for(icnt = 1;icnt<=5;icnt++)
    {
        imul = ino*icnt;
        {
            printf("%d",imul);
        }
        
    }
}

int main()
{
    int ivalue = 0;
    printf("Enter number\n");
    scanf("%d",&ivalue);

    MultipleDisplay(ivalue);

    return 0;
}