#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int Arr[],int iLength,int iNo)
{
    int icnt =0;

    for(icnt=0;icnt<iLength;icnt++)
    {
        if(Arr[icnt]==iNo)
        {
            return icnt;
        }     
    }
    return -1;

}

int main()
{
    int iSize = 0,iret =0,icnt = 0,ivalue =0;
    int *p = NULL;

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

    iret = FirstOcc(p,iSize,ivalue);

    if(iret== -1)
    {
        printf("there is no such number");
    }
    else
    {
        printf("1st occurrence of number is %d",iret);
    }

    free(p);

    return 0;
}