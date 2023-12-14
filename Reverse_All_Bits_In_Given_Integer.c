#include<stdio.h>
#define REV_CON(DATA,L,R) ((DATA>>L)&1)!=((DATA>>R)&1)
#define REV_LOG(DATA,L,R) (DATA^=1<<L);(DATA^=1<<R)
int main ()
{
    int data,l=31,r=0,i;
    scanf("%d",&data);
    for(l=31,r=0;l>r;l--,r++)
    {
        if(REV_CON(data,l,r))
        {
            REV_LOG(data,l,r);
        }
    }
    for(i=31;i>=0;i--)
    {
        printf("%d ",(data>>i)&1);
    }
    printf("%d ",data);
}
