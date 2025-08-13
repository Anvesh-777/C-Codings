#include <stdio.h>

#define IS_LITTLE_ENDIAN()  (*((char *)&(unsigned int){1}) == 1)

int main() {
    if (IS_LITTLE_ENDIAN())
        printf("System is Little Endian\n");
    else
        printf("System is Big Endian\n");

    return 0;
}
