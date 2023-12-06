# C-Codings
// Take Integer input and find the 1st and 2nd largest numbers
#include<stdio.h>
void largest(int arr[], int num) 
{
    int sl = arr[0], l = arr[0];
    int flag= 1; 

    for (int i = 0; i < num; i++)
 {
        if (arr[i] > l)
  {
            sl = l;
            l = arr[i];
            flag= 0; 
        }
 else if (arr[i] > sl && arr[i] < l)
  {
            sl = arr[i];
            flag= 0; 
        }
    }

    if (flag)
  {
        printf("Largest=0 \n");
    } 
 else
  {
        printf("%d %d\n", sl, l);
    }
}
void input(int arr[],int num)
{
    printf("enter the elements:\n");
    for(int i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
}
void print(int arr[],int num)
{
    printf("the elements are:\n");
    for(int i=0;i<num;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main()
{
    int arr[10];
    printf("enter the size\n");
    int num;
    scanf("%d",&num);
    input(arr,num);
    print(arr,num);
    largest(arr,num);
}
