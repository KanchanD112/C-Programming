//count a no.of small character from string
#include<stdio.h>

int Countsmall(char str[])
{

int iCnt=0;

while(*str !='\0')
{
if((*str>='a')&&(*str<='z'))
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


iRet = Countsmall(Arr);
printf("Frequency of small letter is : %d\n",iRet);

    return 0;
}