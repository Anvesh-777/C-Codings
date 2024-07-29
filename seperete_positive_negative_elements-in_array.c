
#include <stdio.h>

int main()
{
    int arr[]={4,6,9,-4,8,-1,2,-3,-6};
    int len=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<len;i++)
    {
        for(int j=i+1;j<len;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
                
            
        }
    }
printf("Array elements are:\n");
    for(int i=0;i<len;)
    printf("%d ",arr[i++]);

    return 0;
}