#include<stdio.h>
#define SETBITPAIR(data,bitpos) while(bitpos<=31)\
                                    { if((data&(1<<bitpos++))&&(data&(1<<bitpos++)))\
                                         {count++;}\
                                              }printf("%d",count)
int main()
{
    int data,bitpos=0,count=0;
    scanf("%d",&data);
   SETBITPAIR(data,bitpos);
}
