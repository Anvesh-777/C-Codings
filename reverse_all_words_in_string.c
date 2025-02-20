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
        /*while (tok != NULL) 
        {

            int len = strlen(tok);
            for (int i = 0; i < len / 2; i++) {
                char temp = tok[i];
                tok[i] = tok[len - i - 1];
                tok[len - i - 1] = temp;
            }
            
            printf("%s ", tok);
            tok = strtok(NULL, del);
        }*/
        printf("%s ", tok);
        tok = strtok(NULL, del);
    }

    return 0;
}
