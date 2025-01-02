#include<stdio.h>
#include<stdlib.h>

int product(int Arr[],int iLength)
{
    int icnt =0,ians=1;

    for(icnt=0;icnt<iLength;icnt++)
    {
        if(Arr[icnt]%2 !=0)
        {
            ians=ians*Arr[icnt];
        }
    }
    return ians;
    
}

int main()
{
    int iSize = 0,icnt = 0,iret = 0;
    int *p = NULL;

    printf("Enter the number of elements:");
    scanf("%d",&iSize);

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

    iret=product(p,iSize);

    printf("Product is %d",iret);

    free(p);

    return 0;
}