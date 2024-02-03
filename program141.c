//conver string in lower

#include<stdio.h>

void Strlwr(char str[])
{

int iCnt=0;

while(*str !='\0')
{
    if(*str >= 'A'&& *str<='Z')
    {
    *str = *str+32;
    }
str++;
}

}
int main()
{

char Arr[20];

printf("Enter the string :\n");
scanf("%[^'\n']s",Arr);//strlenX(100)


Strlwr(Arr);
printf("Updated string is : %s\n",Arr);

    return 0;
}