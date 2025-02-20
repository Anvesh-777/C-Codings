
#include <stdio.h>

int main()
{
    int a[]={2,3,4,5,6,4,5,6,3,99,0};
    int cnt[100]={0};
    int len=sizeof(a)/sizeof(a[0]);
    
    for(int i=0;i<len;i++)
    {
       cnt[a[i]]++;
    }
    for (int i = 0; i < 100; i++) 
    {
        if (cnt[i] > 0) 
        { 
            printf("%d: %d\n", i, cnt[i]);
        }
    }   

    return 0;
}
