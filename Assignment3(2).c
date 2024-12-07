#include<stdio.h>

void displayfactor(int ino)
{
    int i = 0;

    if(ino<=0)
    {
        ino = -ino;
    }
    for(i=1;i<ino;i++)
    {
        if(ino%i==0 && i%2==0)
        {
            printf("%d",i);
        }
    }
}

int main()
{
    int ivalue = 0;

    printf("enter number\n");
    scanf("%d",&ivalue);

    displayfactor(ivalue);

    return 0;
}