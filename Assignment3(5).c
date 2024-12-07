#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL chkvowel(char cch)
{
    if(cch == 'a'||cch =='e'||cch=='i'||cch=='o'||cch=='u')
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
    char cvalue ='\0';
    BOOL bret = FALSE;

    printf("Enter the character\n");
    scanf("%c",&cvalue);

    bret= chkvowel(cvalue);

    if(bret==TRUE)
    {
        printf("It is Vowel\n");
    }
    else
    {
        printf("It is not Vowel\n");
    }


    return 0;
}