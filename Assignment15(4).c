#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[],int iLength,int istart,int iend)
{
    int icnt =0;

    for(icnt=0;icnt<iLength;icnt++)
    {
        if(Arr[icnt]>= istart && Arr [icnt]<=iend)
        {
            printf("%d ",Arr[icnt]);
        }
    }
}

int main()
{
    int iSize = 0,icnt = 0,ivalue1 = 0,ivalue2 = 0;
    int *p = NULL;

    printf("Enter the number of elements:");
    scanf("%d",&iSize);

    printf("Enter the starting point: ");
    scanf("%d",&ivalue1);

    printf("Enter the ending point: ");
    scanf("%d",&ivalue2);

    p = (int*)malloc(iSize* sizeof(int));

    if(p == NULL)
    {
       printf("Unable to allocate memory\n");
       return -1;
    }

    printf("Enter %d elements\n",iSize);

    for (icnt = 0;icnt<iSize;icnt++)
    {
        printf("Enter element%d:",icnt+1);
        scanf("%d",&p[icnt]);
    }

    Range(p,iSize,ivalue1,ivalue2);

    free(p);

    return 0;
}