#include <stdio.h>
#include <string.h>

void reverseWords(char *str)
{
    int start = 0;
    int end = 0;

    while (str[end] != '\0') 
    {
        // Find the end of the current word
        while (str[end] != ' ' && str[end] != '\0')
          {
            end++;
        }

        // Reverse the current word
        int i, j;
        for (i = start, j = end - 1; i < j; i++, j--) 
        {
            char temp = str[i];
            str[i] = str[j];
            str[j] = temp;
        }

        // Move to the next word
        if (str[end] != '\0')
        {
            start = end + 1;
            end++;
        }
    }
}

int main()
{
    // Define a buffer for input
    char input[100];

    // Read input from the user
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    // Remove newline character from input if present
    size_t len = strlen(input);
    if (len > 0 && input[len - 1] == '\n') 
    {
        input[len - 1] = '\0';
    }

    // Reverse the words in the input
    reverseWords(input);

    // Print the reversed output
    printf("Output: %s\n", input);

    return 0;
}
