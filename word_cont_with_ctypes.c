#include <stdio.h>
#include <ctype.h>
#include<stdlib.h>
int main()
{
    //char str[100];
    char *str=NULL;
    int i, words;
    words = 0;
    str=calloc(1,sizeof(char));
    printf("Enter a sentence\n");
    //fgets(str, sizeof(str), stdin);
    scanf("%[^*]",str);
    
    for(i = 0; str[i] != '\0'; i++)
    {
        if(isspace(str[i]))
        {
            if(i > 0 && !isspace(str[i - 1])) // Check for consecutive spaces, tabs, and newlines
            {
                words++;
            }
        }
    }
    
    if(!isspace(str[i - 1])) // Check for the last word if it doesn't end with space, tab, or newline
    {
        words++;
    }
    
    printf("The total words in the string: %d", words);
    
    return 0;
}
