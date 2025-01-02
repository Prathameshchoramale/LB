#include <stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[], int iLength)
{
    printf("Elements divisible by 5 are: \n");
    for (int i = 0; i < iLength; i++)
    { 
        if (Arr[i] == 11)
        {
           return TRUE;
        }
        else
        {
            return FALSE;
        }
    }
}


int main()
{
    int iSize = 0, iRet = 0, icnt = 0;
    int *p = NULL;
    BOOL bret = FALSE;

    printf("Enter number of elements: ");
    scanf("%d",&iSize);

    p =(int*)malloc(iSize*sizeof(int));

    if(p==NULL)
    {
        printf("unable to allocate memory");
        return -1;
    }

    for(icnt=0;icnt<iSize;icnt++)
    {
        printf("Enter element%d:",icnt+1);
        scanf("%d",&p[icnt]);
    }

    bret = Check(p,iSize);

    if(bret==TRUE)
    {
        printf("11 is Present");
    }
    else
    {
        printf("11 is absent");
    }
    free(p);


    return 0;
}
