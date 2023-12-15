#include <stdio.h>

// Function to convert decimal to binary
void decToBinary(int n, int binaryArray[])
 {
    int i = 0;
    while (n > 0) 
	{
         binaryArray[i] = n % 2;
         n = n / 2;
         i++;
	}
}

// Function to check if the binary representation is a palindrome
int isBinaryPalindrome(int binaryArray[], int size)
 {
    int start = 0, end = size - 1;
    while (start < end) {
        if (binaryArray[start] != binaryArray[end]) 
	{
            return 0; // Not a palindrome
        }
        start++;
        end--;
    }
    return 1; // Palindrome
}

int main()
 {
    int decimalNumber;

    // Input decimal number
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    int binaryArray[32]; // Assuming a 32-bit integer
    decToBinary(decimalNumber, binaryArray);

    // Check if binary representation is a palindrome
    if (isBinaryPalindrome(binaryArray, 32))
	 {
        printf("Binary representation is a palindrome.\n");
    	}
	 else
	 {
        printf("Binary representation is not a palindrome.\n");
   	 }

    return 0;
}
