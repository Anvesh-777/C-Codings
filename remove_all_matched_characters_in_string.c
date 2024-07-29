#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "Amritesh";
    char str2[] = "Anvesh";
    
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    int len = len1 > len2 ? len1 : len2;
    
    printf("%d\n", len);
    
    for(int i = 0; i < len2; i++)
    {
        for(int j = 0; j < len1; j++)
        {
            if(str2[i] == str1[j])
            {
                for(int k = i; k < len2 - 1; k++)
                {
                    str2[k] = str2[k+1];
                }
                for(int k = j; k < len1 - 1; k++)
                {
                    str1[k] = str1[k+1];
                }
                len1--;
                len2--;
                i--;
                break;
            }
        }
    }
    
    str1[len1] = '\0';
    str2[len2] = '\0';
    
    printf("str1= %s\nstr2= %s\n", str1, str2);
    return 0;
}