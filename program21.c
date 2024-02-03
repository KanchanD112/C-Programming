// accept class and print the exam time

#include<stdio.h>

void DisplayExam(int iclass)
{
/*if((fMarks < 0.00) || (fMarks > 100.00))   //filter
{
    printf("Invalid marks...\n");
}
*/
    switch(iclass)
    {
      case 1:
     
       printf("your exam time is 8am ..\n");
       break;
     case 2:
       printf("your exam time is 9am ..\n");    
       break;
      case 3:
       printf("your exam time is 10 am ..\n");    
       break;
     case 4:
       printf("your exam time is 11am ..\n");    
       break;
       
     case 5:
      printf("your exam time is 12am ..\n");    
      break;
      default:
      printf("wrong input ..\n");
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



















