//display 5to 1 on screen
#include<stdio.h>

void Display(int iNo)

{
int iCnt = 0;
//      1       2           3
for(iCnt = iNo; iCnt >= 1; iCnt--)
{
printf("%d\n",iCnt); //4
}
}

int main()
{
    int iValue = 0;
    printf("how many time you want to display on screen\n");
    scanf("%d",&iValue);


Display(iValue);
return 0;
}
