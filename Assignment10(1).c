#include<stdio.h>

void RangeDisplay(int istart,int iend)
{
    int icnt=0;

    if(iend<istart)
    {
        printf("Invalid range");
    } 
    for(icnt=istart;icnt<=iend;icnt++)
    {
        printf("%d ",icnt);
    }

}

int main()
{
    int ivalue1 = 0,ivalue2 = 0;

    printf("Enter start point \n");
    scanf("%d",&ivalue1);

    printf("Enter end point \n");
    scanf("%d",&ivalue2);

    RangeDisplay(ivalue1,ivalue2);

    return 0;
}