//accept n numbers from the user and display frequency of entered number

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iSize,int iNo)
{
int iCnt = 0;
int iFrequency = 0;

for(iCnt=0;iCnt<iSize;iCnt++)
{
    if(Arr[iCnt] == iNo)
    {
        iFrequency++;
    }
    
}
return iFrequency;
}
int main()
{
 int iCount = 0; int iValue=0;
 int *ptr = NULL;
 int iRet = 0;
 int iCnt = 0;
 printf("Enter number of element that you want to enter:\n");
 scanf("%d",&iCount);

ptr = (int *)malloc(iCount*sizeof(int));
printf("Dynamic memory gets allocated successfully...\n");

printf("Enter the elements:\n");

for(iCnt=0;iCnt<iCount;iCnt++)
{
    printf("\nEnter the elements:\n",iCnt+1);
    scanf("%d",&ptr[iCnt]);
}

printf("Enter the element that you want to search:\n");
scanf("%d",&iValue);

iRet = Frequency(ptr,iCount,iValue);
printf("%d occurs %d times\n",iValue,iRet);

free(ptr);
printf("Dynamic memory gets deallocated successfully...\n");

    return 0;
}