/******************************************************************************
Requirement: Find Biggest of two numbers without using comparison operators

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int a=0,b=0;
    printf("Enter two number:");
    scanf("%d%d", &a,&b);

    int big_number=(a+b+abs(a-b))/2;

    printf("Result = %d", big_number);

    return 0;
}

