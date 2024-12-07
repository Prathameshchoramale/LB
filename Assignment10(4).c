#include<stdio.h>

void RangeDisplayEven(int istart,int iend)
{
    int icnt=0,isum =0;

    if(iend<istart||istart<0||iend<0)
    {
        printf("Invalid range");
        return;
    }

    {
        for(icnt=istart;icnt<=iend;icnt++)
       {
         if(icnt % 2 == 0)
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

    RangeDisplayEven(ivalue1,ivalue2);

    return 0;
}