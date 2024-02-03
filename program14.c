/*
START

 accept number from user
 divide that number by 2
 if reminder is 0 then display even
 otherwise display odd
STOP
*/
#include<stdio.h>
#include<stdbool.h>

bool checkeven(int iNo)
{

    if((iNo % 2) == 0)
    {
        return true;
    }

else
{
    return false;
}
}
int main()
{
     auto int ivalue = 0;
     auto bool bRet = false;
    printf("enter number : \n");
    scanf("%d",&ivalue);

    bRet = checkeven(ivalue);
    if(bRet == true)
    {
        printf("%d is an even number\n",ivalue);
    }
    else
    {
        printf("%d is an odd number\n",ivalue);
    }


    return 0;
}