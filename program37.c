//display hello 1 to hello 5 on screen
#include<stdio.h>

void Display()
{
int iCnt = 0;
for(iCnt = 1; iCnt <= 5; iCnt++)
{
printf("Hello %d\n",iCnt);
}
}

int main()
{
    
Display();
return 0;
}
