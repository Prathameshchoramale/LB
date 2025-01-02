#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[],int iLength,int iNo)
{
    int icnt =0;

    for(icnt=0;icnt<iLength;icnt++)
    {
        if(Arr[icnt]==iNo)
        {
            return TRUE;
        }
        
    }
    return FALSE;

}

int main()
{
    int iSize = 0,icnt = 0,ivalue =0;
    int *p = NULL;
    BOOL bret = FALSE;

    printf("Enter the number of elements:");
    scanf("%d",&iSize);

    printf("Enter the number: ");
    scanf("%d",&ivalue);

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

    bret = Check(p,iSize,ivalue);

    if(bret==TRUE)
    {
        printf("Number is present");
    }
    else
    {
        printf("Number is not present");
    }

    free(p);

    return 0;
}