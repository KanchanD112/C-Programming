// problem statement : accept radious from user and calculate the area of circle
// step1:'understand the problem statement
//conclusion: we are going to use formula as PI*R*R

//step2: algorithm:
/* 
START
   Accept the radious from user and store into RADIUS
   create variable as PI and store value 3.14
   calculate area PI * RADIUS *RADIUS
   display the value of Area to the user
  
STOP
*/


#include<stdio.h>
//////////////////////////////////////////////////////////////
//Name: Area
//Description: calculate area of circle
//input argument: float
//output: float
//Author: kanchan rajabhau dhepe
//Date: 02/10/23
/////////////////////////////////////////////////////////////

float calculateArea(float fvalue)
{
auto float fAns = 0.0f;
auto  const float PI = 3.14f;
fAns = PI * fvalue * fvalue;
return fAns;
}
//////////////////////////////////////////////////
//entry point function
//////////////////////////////////////////////////
int main()
{

auto float fradius = 0.0f;
auto float farea = 0.0f;

printf("Enter radius :\n");
scanf("%f",&fradius);

farea = calculateArea(fradius);
printf("area of circle is:%f",farea);
    return 0;
}