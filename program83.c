//accept n numbers from the user and display frequency  number

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iSize)
{
int iCnt = 0;
int iFrequency = 0;

for(iCnt=0;iCnt<iSize;iCnt++)
{
    if(Arr[iCnt] == 21)
    {
        iFrequency++;
    }
    
}return iFrequency;

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
iRet = Frequency(ptr,iCount);
printf("21 occurs %d times\n",iRet);

free(ptr);
printf("Dynamic memory gets deallocated successfully...\n");

    return 0;
}