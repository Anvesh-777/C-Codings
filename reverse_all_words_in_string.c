#include <stdio.h>
#include <string.h>

void reverse(char *start, char *end) {
    char temp;
    while (start < end) {
        temp = *start;
        *start++ = *end;
        *end-- = temp;
    }
}

int main() {
    char str[] = "Hello world";
    const char* del = " ";
    char* tok = strtok(str, del);
    
    while (tok != NULL) {
        reverse(tok, tok + strlen(tok) - 1);
        printf("%s ", tok);
        tok = strtok(NULL, del);
    }

    return 0;
}
