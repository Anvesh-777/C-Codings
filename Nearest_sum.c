#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4,5,6,7,8,9};
    int target = 0, sum = 0, nearest_sum = 0, nearest_i = 0, nearest_j = 0;
    int length = sizeof(arr) / sizeof(arr[0]);

    printf("Enter the target you want:\n");
    scanf("%d", &target);

    for (int i = 0; i < length; i++)
    {
        for (int j = i + 1; j < length; j++)
        {
            sum = arr[i] + arr[j];
            
            if (sum < target)
            {
                    nearest_sum = sum;
                    nearest_i = i;
                    nearest_j = j;
            }
        }
    }
    printf("The nearest sum is %d and Elements are %d and %d", arr[nearest_i] + arr[nearest_j], arr[nearest_i], arr[nearest_j]);

    return 0;
}
