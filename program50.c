//accept th3e number and print whether the no. is perfect or not
//perfect no is the positive no.  whose factors addition is same as the number

#include<stdio.h>
#include<stdbool.h>
//bool TRUE;
//bool FALSE;

bool CheckPerfect(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    if(iNo < 0)     //updater
    {
        iNo = -iNo;
    }
   
    for(iCnt = 1; iCnt<=(iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    if(iSum == iNo)
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
int iValue = 0;
int  iRet = false;

printf("enter the number : \n");
scanf("%d",&iValue);

iRet = CheckPerfect(iValue);
if(iRet == true)
{
    printf("%d  is perfect number\n",iValue);
}
else
{
    printf("%d  is not perfect number\n",iValue);
}




return 0;
}
