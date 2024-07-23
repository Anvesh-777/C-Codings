#include <stdio.h>

int main()
{
    int arr[] = {1,5,1,1,1,1};
    int len = sizeof(arr) / sizeof(arr[0]);
    int flag = 0;

    for(int i = 0; i < len; i++)
    {
        flag = 0;
        for(int j = 0; j < len; j++)
        {
            if(i != j && arr[i] == arr[j])
            {
                flag = 1;
                break;
            }
        }
        if(!flag)
        {
            printf("The first non-repeated element in the array = %d", arr[i]);
            break;
        }
    }
    if(flag==1)
    printf("No Non-repeated element in the array:\n");
    return 0;
}
