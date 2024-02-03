//problem statement : accept 2 vlaues from user and perform addition
//step 1: understand the problem statement
//conclusion : we have to accept two integer and perform its addition.
//step 2: write the algorithm
/*
    START
        Accept first number from user and store it into no1
        Accept seond number from user and store it into no2
        Create one variable to store the result name as Ans
        Perform the addition of no1 and no2 , store the result in Ans
        Display the result from Ans to the user
    STOP
*/
//step 3: decide the programing language(C,C++,java, python)
// we select c programing
// write the program 
#include<stdio.h>
int main()
{
int i, j , k;
printf("Enter first number:\n");
scanf("%d",&i);

printf("Enter second number:\n");
scanf("%d",&j);

k = i + j;
printf("Addition is: %d\n",k);


    return 0;
}