//accept 3 number and print largest

#include<stdio.h>
int Maximum(int iNo1, int iNo2, int iNo3)
{
 if((iNo1 > iNo2) && (iNo1 > iNo3))
 {
    return iNo1;
 }
 else if((iNo2 >= iNo1) && (iNo2 >= iNo3))
 {
    return iNo2;
 }
 else if((iNo3 >= iNo1) && (iNo3 >= iNo2))
 {
    return iNo3;
 }
}
int main()
{
 int iValue1 = 0;
 int iValue2 = 0;
 int iValue3 = 0;
 int iRet = 0.0f;
 
 printf("enter first number :\n");
 scanf("%d",&iValue1);

 printf("enter second number :\n");
 scanf("%d",&iValue2);
 printf("enter third number :\n");
 scanf("%d",&iValue2);

iRet = Maximum(iValue1, iValue2, iValue3);
printf("largest no. is:%i\n",iRet);

    return 0;
}