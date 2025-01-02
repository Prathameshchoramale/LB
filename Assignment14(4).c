#include <stdio.h>
#include <stdlib.h>

int Frequency(int Arr[], int iLength, int value)
{
    int count = 0;
   
    for (int i = 0; i < iLength; i++)
    {
        if (Arr[i] == value)
        {
            count++;
        }
    }
    return count;
}


int main() 
{
    int iSize = 0, iRet = 0, iCnt = 0, value = 0;
    int *p = NULL;
    
    printf("Enter number of elements: ");
    scanf("%d", &iSize);
    
    p = (int*)malloc(iSize * sizeof(int));
    
    if (p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }
    
    printf("Enter %d elements:\n", iSize);
    
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d: ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

   
    printf("Enter the value to find its frequency: ");
    scanf("%d", &value);

    iRet = Frequency(p, iSize, value);
    printf("The frequency of %d is: %d\n", value, iRet);

    free(p);
    return 0;
}