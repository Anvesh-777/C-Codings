#include<stdio.h>
#define SWAP(n) unsigned char hb;\
                    hb=n>>8;\
                        n=n<<8;\
                            n|=hb
int main()
{
unsigned short int var;
scanf("%hx",&var);
SWAP(var);
printf("%hx",var);
}
