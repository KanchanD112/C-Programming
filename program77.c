//accept n numbers from the user and display sum of odd number

#include<stdio.h>
#include<stdlib.h>


int iOddAddition(int Arr[],int iSize)  //(100,4)
{
int iCnt=0;
int iSum = 0;

//    1      2          3
for(iCnt=0; iCnt < iSize; iCnt++)
{
    if((Arr[iCnt]%2)!=0)
    {
    iSum = iSum + Arr[iCnt];
    }
}return iSum;

}

int main()
{

int iCount=0; int iCnt = 0;int iret = 0;
int *ptr = NULL;

printf("enter the number of elements that you want to enter:\n");
scanf("%d",&iCount);

ptr = (int *)malloc(iCount * sizeof(int));
printf("Dynamic Memory  gets allocated successfully for %d elements\n",iCount);
printf("Enter the %d values\n",iCount);

printf("enter the values:\n");
for(iCnt=0;iCnt<iCount;iCnt++) //O(N)
{
    printf("Enter the element no %d:",iCnt+1);
    scanf("%d",&ptr[iCnt]);

}

iret = iOddAddition(ptr,iCount);//Display(100,4)

printf("Addition of Odd elements are: %d\n",iret);
free(ptr);  //free(100)
printf("Dynamic memory gets deallocated successfully...\n");
    return 0;
}