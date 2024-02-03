//string ghya if a is there print _ print kara
#include<stdio.h>

void Replace(char str[])
{

int iCnt=0;

while(*str !='\0')
{
if(*str=='a')
{
    *str = '_';
}
str++;
}

}
int main()
{

char Arr[20];

printf("Enter the string :\n");
scanf("%[^'\n']s",Arr);//strlenX(100)


 Replace(Arr);
printf("Updated string is : %s\n",Arr);

    return 0;
}