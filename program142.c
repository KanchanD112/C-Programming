//conver string in upper

#include<stdio.h>

void Strupr(char str[])
{

int iCnt=0;

while(*str !='\0')
{
    if(*str >= 'a'&& *str<='z')
    {
    *str = *str-32;
    }
str++;
}

}
int main()
{

char Arr[20];

printf("Enter the string :\n");
scanf("%[^'\n']s",Arr);//strlenX(100)


Strupr(Arr);
printf("Updated string is : %s\n",Arr);

    return 0;
}