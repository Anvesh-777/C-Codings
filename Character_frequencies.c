#include <stdio.h>

int main() 
{
    char *inputString="JjjjjjjAaaaaiiiiI";
    int count[256] = {0};  
    int string_length=0,i=0;
    
    //finding string length without using string handling function i.e strlen()
    while(inputString[i++])
    string_length++;
    printf("The string length=%d\n",string_length);
    
 
    for (int i = 0; i < string_length; i++)
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
