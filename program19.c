// accept percentage and print the class 

#include<stdio.h>
void DisplayClass(float fMarks)
{

    
 if((fMarks >=0) && (fMarks < 35.00))
{
 printf("you are fail..\n");
}
else if((fMarks >=35.00) && (fMarks < 50.00))
{
     printf("your class is pass class..\n");

}
else if((fMarks >=50.00) && (fMarks < 60.00))
{
 printf("your class is second class..\n");

}
else if((fMarks >=60.00) && (fMarks < 75.00))
{
    printf("your class is first class..\n");
}
else if((fMarks >=75.00) && (fMarks < 100.00))
{
    printf("your class is first class  with distinction class..\n");
}

}

int main()
{
 float fpercentage = 0.0f;

 printf("enter the percentage:\n");
scanf("%f",&fpercentage);

DisplayClass(fpercentage);
    return 0;
}



















