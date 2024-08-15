#include <stdio.h>
#include <string.h>

int main()
{
    char a[] = "baidcifeihgi";
    int len = strlen(a);
    printf("%d\n", len);
    
    char *start=a;
    char *ptr = strchr(start, 'i');
    while (ptr != NULL) 
    {
        char *end = ptr - 1; // Exclude the 'i' character

        // Swap characters before 'i'
        while (start < end) 
        {
            char temp = *start;
            *start = *end;
            *end = temp;
            start++;
            end--;
        }
        start=ptr+1;
        ptr = strchr(start, 'i'); // Move to the next occurrence of 'i'
        
    }
    printf("%s\n", a);

    return 0;
}
