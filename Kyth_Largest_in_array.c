#include<stdio.h>
int main()
{
    int arr[]={1,2,3,3,4,5,5,76,878,8};
    int len=sizeof(arr)/sizeof(arr[0]);
    int Kth_largest=0;
    
    for(int i=0;i<len;i++)
    {
        for(int j=0;j<len;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("The array elements after arranging:\n");
    for(int i=0;i<len;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("Enter your choice in Between 1 and %d range only:\n",len);
    scanf("%d",&Kth_largest);
    
    if((Kth_largest<=0)||(Kth_largest>len))
    printf("You entered wrong choice:\nIt should be in 1 and %d range only:\n",len);
    else 
    printf("%d",arr[Kth_largest-1]);
    return 0;
}