#include<stdio.h>
#include<stdlib.h>

//void Display(int *Arr,int iSize)
void Display(int Arr[],int iSize)  //(100,4)
{
int iCnt=0;
printf("\nElements of the array are:\n");

//    1      2          3
for(iCnt=0;iCnt<iSize;iCnt++)
{
    printf("%d\t",Arr[iCnt]);//4
}printf("\n");

}

int main()
{

int iCount=0; int iCnt = 0;
int *ptr = NULL;

printf("enter the number of elements that you want to enter:\n");
scanf("%d",&iCount);

ptr = (int *)malloc(iCount * sizeof(int));
printf("Dynamic Memory  gets allocated successfully for %d elements\n",iCount);
printf("Enter the %d values\n",iCount);

printf("enter the values:\n");
for(iCnt=0;iCnt<iCount;iCnt++) //O(N)
{
    printf("\n Enter the element no %d:",iCnt+1);
    scanf("%d",&ptr[iCnt]);

}

Display(ptr,iCount);//Display(100,4)
free(ptr);  //free(100)
printf("Dynamic memory gets deallocated successfully...\n");
    return 0;
}