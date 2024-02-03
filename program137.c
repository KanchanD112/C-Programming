//count a no.of small and capita;l//case insensitive
#include<stdio.h>

int Countvowel(char str[])
{

int iCnt=0;

while(*str !='\0')
{
    
if((*str=='A')||(*str=='E')||(*str=='I')||(*str=='O')||(*str=='U')||(*str=='a')||(*str=='e')||(*str=='i')||(*str=='o')||(*str=='u'))
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


iRet = Countvowel(Arr);
printf("Frequency of vowel is : %d\n",iRet);

    return 0;
}