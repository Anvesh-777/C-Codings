#include <stdio.h>
#include<string.h>
int main() {
    
    char *s="ANVESH";
    char var='A';
    int cnt=0;
    while(var>='A'&& var<='Z')
    {
        int flag=0;
        for(int i=0;s[i];i++)
        {
            if(var==s[i])
            {
                flag=1;
            }
        }
        if(flag!=1){
            cnt++;
        printf("%c - %d\n",var,cnt);
        }
        var++;
    }
    printf("\n%ld",26-strlen(s));
    return 0;
}
