#include <stdio.h>
#include <string.h>

int main() 
{
    char *inputString="JjjjjjjAaaaaiiiiI";
    int count[256] = {0};  
    for (int i = 0; i < strlen(inputString); i++)
    {
        count[(int)inputString[i]]++;
    }
    printf("Character frequencies:\n");
    for (int i = 0; i < 256; i++)
    {
        if (count[i] > 0) 
        {
            printf("%c: %d\n", (char)i, count[i]);
        }
    }

    return 0;
}
/**********************************************************
Character frequencies:
A: 1
I: 1
J: 1
a: 4
i: 4
j: 6
*******************************************************************/
