//display 1 to 5 on screen
#include<stdio.h>

void Display(int iNo)
{
int iCnt = 0;
//      1       2           3
for(iCnt = 1; iCnt <= iNo; iCnt++)
{
printf("%d\n",iCnt); //4
}
}

int main()
{
    int iValue = 0;
    printf("how many time you want to display on screen");
    scanf("%d",&iValue);

    
Display(iValue);
return 0;
}
