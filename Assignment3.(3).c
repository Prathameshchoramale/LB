#include<stdio.h>

void displayevenfactor(int ino)
{

    if(ino<=0)
    {
        ino = -ino;
    }
    for(int i=2;i<ino;i++)
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

    displayevenfactor(ivalue);

    return 0;
}