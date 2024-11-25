#include<stdio.h>

int main()
{
    int num=0, reverse_num=0;
    printf("Enter the number you want to reverse:\n");
    scanf("%d",&num);
    
    if(num>-10 && num<10)
    {
        printf("No need to reverse The Number = %d\n",num);
        return 0;
    }
    else
    {
        while(num != 0)
        {
            int remainder = num % 10;
            reverse_num = reverse_num * 10 + remainder;
            num = num / 10;
        }
        printf("Reversed Number = %d\n", reverse_num);
    }
    
    return 0;
}
