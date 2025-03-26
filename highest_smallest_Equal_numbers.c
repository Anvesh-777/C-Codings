#include <stdio.h>

int main() {
    int a[] = {99, 99,99, 99, 99};
    int highest_num = a[0];
    int smallest_num = a[0];
    int flag = 0;
    int len = sizeof(a) / sizeof(a[0]);
    printf("len=%d\n", len);
    
    for (int i = 0; i < len; i++) 
    {
        if (highest_num < a[i]) 
        {
            flag++;
            highest_num = a[i];
        }
        if (smallest_num > a[i])
        {
            flag++;
            smallest_num = a[i];
        }
    }
    
    if (flag == 0) 
    {
        printf("All are equal\n");
    } 
    else 
    {
        printf("Highest number=%d\n", highest_num);
        printf("Smallest number=%d\n", smallest_num);
    }
    
    return 0;
}
