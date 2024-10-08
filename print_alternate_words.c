#include <stdio.h>
int main4()
{
	//this isthe codetodisplay alternate word
    const char *str = "  abd   def   ght      ydr  udf    ffe  ";
    
    int word_count=0;
    while (*str != '\0')
    {
        // if there space is available first only ...Skip leading spaces
        while (*str != '\0' && (*str == ' ' || *str == '\t' || *str == '\n'))
        {
            str++;
        }
        // If we are at the beginning of a word
        if (*str != '\0' && !(*str == ' ' || *str == '\t' || *str == '\n'))
        {
            word_count++;
            // Print the word if it is in an odd position (1st, 3rd, 5th, etc.)
            if (word_count % 2 != 0)
            {
                // Print the word
                while (*str != '\0' && !(*str == ' ' || *str == '\t' || *str == '\n'))
                {
                    printf("%c",*str);
                    str++;
                }
                printf("\n");
            }
            else
            {
                // Skip the word
                while (*str != '\0' && !(*str == ' ' || *str == '\t' || *str == '\n'))
                {
                    str++;
                }
            }
        }
    }

    return 0;
}
