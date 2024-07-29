#include <stdio.h>

int main()
{
   int arr[] = {1,1,1,1,1,1};
   int len = sizeof(arr) / sizeof(arr[0]);
   int flag = 0;
   
   if(len == 1 || len == 2)
   {
       printf("There is no peak element in an array:\n");
       return 0;
   }
   else
   {
       for(int i = 1; i < len - 1; i++)
       {
           if((arr[i - 1] < arr[i]) && (arr[i + 1] < arr[i]))
           {
               flag = 1;
               printf("%d\n", arr[i]);
           }
       }
   }
   if(flag == 0)
       printf("There is no peak element in the array:\n");

    return 0;
}
