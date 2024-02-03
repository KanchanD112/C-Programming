/*
Input: iRow = 4
iCol = 4
  input taken from user 
  
   # * * *
   * # * *
   * * # *
   * * * #         
 */
#include<stdio.h>

void Display(int iRow,int iCol)
{
int i = 0;
int j = 0;

for(i = 1; i<=iRow; i++) //Outer
{
    for(j=1;j<=iCol;j++) //Inner
    {
        if(i==j)
        {
            printf("#\t");
        }
       else
       {
        printf("*\t");
       }
       
    }printf("\n\n");
}

}

int main()
{    
    int iNo1 = 0;
    int iNo2 = 0;
    printf("Enter number of rows :\n");
    scanf("%d",&iNo1);

    printf("Enter number of Columns :\n");
    scanf("%d",&iNo2);
    
    Display(iNo1,iNo2);
    return 0;
}