#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;
BOOL chkEven(int ino)
{
   if(ino % 2 == 0) 
    { 
        return TRUE;
    }
    else 
    { 
      return FALSE;
    }

}

int main()
{
    int ivalue = 0;
    BOOL bRet = FALSE;

    printf("Enter the number: ");
    scanf("%d",&ivalue);

    bRet = chkEven(ivalue);

    if(bRet == TRUE)
    { 
        printf("%d is Even\n",ivalue); 
    }
    else
    {
        printf("%d is Odd\n",ivalue);
    }


    return 0;
}