//accept n numbers from the user and display smallest(minimum) number

#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[],int iSize)
{
int iCnt = 0;
int iMin = Arr[0];

for(iCnt=0;iCnt<iSize;iCnt++)
{
if(Arr[iCnt]<iMin)
{
    iMin = Arr[iCnt];
}
}
return iMin;
}
int main()
{
 int iCount = 0;
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
iRet = Minimum(ptr,iCount);
printf("Minimum number is : %d\n",iRet);

free(ptr);
printf("Dynamic memory gets deallocated successfully...\n");

    return 0;
}