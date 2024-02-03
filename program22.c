// accept class and print the exam time

#include<stdio.h>

void DisplayExam(int iclass)
{
if(iclass == 1)
{
 printf("your exam at 8 am\n");
}

else if(iclass == 2)
{
    printf("your exam at 9 am\n");
}
else if(iclass == 3)
{
    printf("your exam at 10 am\n");
}

else if(iclass ==4)
{
   printf("your exam at 11 am\n"); 
} 
else if(iclass == 5)
{
    printf("your exam at 12 am\n");
}   
else
{
printf("invalid input \n");
}
}
int main()
{
 int iclass = 0;

 printf("enter your class :\n");
scanf("%d",&iclass);

DisplayExam(iclass);
    return 0;
}



















