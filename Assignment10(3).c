#include<stdio.h>

void RangeDisplaySum(int istart,int iend)
{
    int icnt=0,isum =0;

    if(iend<istart||istart<0||iend<0)
    {
        printf("Invalid range");
    }
    else
    {
        for(icnt=istart;icnt<=iend;icnt++)
        {
          isum += icnt;
        }
        printf("%d",isum);
    }

    
}

int main()
{
    int ivalue1 = 0,ivalue2 = 0;

    printf("Enter start point \n");
    scanf("%d",&ivalue1);

    printf("Enter end point \n");
    scanf("%d",&ivalue2);

    RangeDisplaySum(ivalue1,ivalue2);

    return 0;
}