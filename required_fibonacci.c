/*-----------------------------------------------------------------------------------
Requirement: Print the required fibonacci number
input: 3
output: 1
input: 100
output: 354224848179261915075
-----------------------------------------------------------------------------------*/

#include <stdio.h>

int main()
{
    int number=0,desired_fibonacci=0,first=0,second=1,third=0;
    printf("Enter the number you want:\n");
    scanf("%d",&number);

    if(number<=0)
    {
        printf("You entered an invalid number:\n");
        return 0;
    }

    if(number==1)
    {
        printf("%d\n",first);
    }
    else if(number==2)
    {
        printf("%d\n",second);
    }
    else
    {
        for(int i=2;i<number;i++)
        {
            third=first+second;
            first=second;
            second=third;
        }
        printf("%d\n",third);
    }

    return 0;
}
