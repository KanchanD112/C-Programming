// problem statement : 
// step1:'understand the problem statement
//conclusion: we calculate cube of number(long int ghetl ya program)

//step2: algorithm:
/* 
START
   Accept the number from user
   create variable as iNo to store the number
   calculate cube by using iNo*iNo*iNo
   display the value of cube to the user
  
STOP
*/


#include<stdio.h>
//////////////////////////////////////////////////////////////
//Name: cube
//Description: calculate cube of number
//input argument: int
//output: int
//Author: kanchan rajabhau dhepe
//Date: 02/10/23
/////////////////////////////////////////////////////////////

int calculatecube(int ivalue)
{
auto int icube = 0;

icube = ivalue * ivalue * ivalue;
return icube;
}
//////////////////////////////////////////////////
//entry point function
//////////////////////////////////////////////////
int main()
{

auto int iNo = 0;
auto int iAns = 0;


printf("Enter number :\n");
scanf("%d",&iNo);

iAns = calculatecube(iNo);
printf("cube is:%d",iAns);
    return 0;
}