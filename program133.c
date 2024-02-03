//count a no.of CAPITAL character from string
#include<stdio.h>

int CountCapital(char str[])
{

int iCnt=0;
//int istr =0;
while(*str !='\0')
{
if((*str>='A')&&(*str<='Z'))
{
    iCnt++;
}
str++;
}
return iCnt;
}

int main()
{

char Arr[20];
int iRet = 0;
printf("Enter the string :\n");
scanf("%[^'\n']s",Arr);//strlenX(100)


iRet = CountCapital(Arr);
printf("Frequency of Capital letter is : %d\n",iRet);

    return 0;
}