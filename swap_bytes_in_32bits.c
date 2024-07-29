#include <stdio.h>

int main()
{
    unsigned int num = 0;
    printf("Enter any unsigned integer in 0xABCDEF format:\n");
    scanf("%x", &num);
    
    printf("The binary representation of your entered number is:\n");
    for(int i = 31; i >= 0; i--)
    {
        printf("%d", (num >> i) & 1);
        if (i % 4 == 0) printf(" ");
    }
    printf("\n");
    
    unsigned int updated_num = ((num & 0xFF000000) >> 24) | 
                               ((num & 0x00FF0000) >> 8)  | 
                               ((num & 0x0000FF00) << 8)  | 
                               ((num & 0x000000FF) << 24);
    
    printf("The binary representation after swapping :\n");
    for(int i = 31; i >= 0; i--)
    {
        printf("%d", (updated_num >> i) & 1);
        if (i % 4 == 0) printf(" ");
    }
    printf("\n");
    
    printf("0x%X\n", updated_num);
    return 0;
}