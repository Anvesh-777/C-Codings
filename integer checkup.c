#include <stdio.h>
#include <stdbool.h>
bool isAnagram(int num1, int num2);
bool isArmstrong(int num);
int factorial(int num);
void fibonacciSeries(int num);
bool isPalindrome(int num);
bool isPerfect(int num);
bool isPrime(int num);
bool isStrong(int num);

int main()
{
	int num = 0;
	char choice = 0;

	while(1)
	{
		printf("Enter the number You want:\n");
		scanf("%d", &num);

		printf("Enter the choice you want to select:\n\
        1. To check Anagram\n\
        2. To check Armstrong\n\
        3. To find factorial\n\
        4. To find Fibonacci series\n\
        5. To check Palindrome or Not\n\
        6. To check Perfect or Not\n\
        7. To check Prime or Not\n\
        8. To check Strong Number or Not\n\
        0. To exit\n");

		scanf(" %c", &choice);

		switch(choice)
		{
		case '1':
			printf("Enter another number to check for anagram:\n");
			int num2;
			scanf("%d", &num2);
			printf(isAnagram(num, num2) ? "Anagram\n" : "Not Anagram\n");
			break;
		case '2':
			printf(isArmstrong(num) ? "Armstrong Number\n" : "Not Armstrong Number\n");
			break;
		case '3':
			printf("Factorial: %d\n", factorial(num));
			break;
		case '4':
			fibonacciSeries(num);
			break;
		case '5':
			printf(isPalindrome(num) ? "Palindrome\n" : "Not Palindrome\n");
			break;
		case '6':
			printf(isPerfect(num) ? "Perfect Number\n" : "Not Perfect Number\n");
			break;
		case '7':
			printf(isPrime(num) ? "Prime Number\n" : "Not Prime Number\n");
			break;
		case '8':
			printf(isStrong(num) ? "Strong Number\n" : "Not Strong Number\n");
			break;
		case '0':
			printf("************Successfully closed************\n");
			return 0;
		default:
			printf("You Entered wrong choice - Please select correct choice:\n");
		}
		printf("\n");
	}

	return 0;
}

bool isAnagram(int num1, int num2)
{
	int count1[10] = {0}, count2[10] = {0};
	while (num1) {
		count1[num1 % 10]++;
		num1 /= 10;
	}
	while (num2) {
		count2[num2 % 10]++;
		num2 /= 10;
	}
	for (int i = 0; i < 10; i++) {
		if (count1[i] != count2[i]) return false;
	}
	return true;
}

bool isArmstrong(int num)
{
	int original = num, sum = 0, digit, n = 0;

	// Count the number of digits
	while (original != 0) {
		original /= 10;
		++n;
	}

	original = num;
	while (original != 0) {
		digit = original % 10;

		// Calculate digit^n without using power function
		int temp = 1;
		for (int i = 0; i < n; i++) {
			temp *= digit;
		}

		sum += temp;
		original /= 10;
	}

	return (sum == num);
}

int factorial(int num)
{
	if (num == 0 || num == 1) return 1;
	return num * factorial(num - 1);
}

void fibonacciSeries(int num)
{
	int t1 = 0, t2 = 1, nextTerm;
	printf("Fibonacci Series: ");
	for (int i = 1; i <= num; ++i) {
		printf("%d, ", t1);
		nextTerm = t1 + t2;
		t1 = t2;
		t2 = nextTerm;
	}
	printf("\n");
}

bool isPalindrome(int num)
{
	int reversed = 0, original = num;
	while (num != 0) {
		int digit = num % 10;
		reversed = reversed * 10 + digit;
		num /= 10;
	}
	return (original == reversed);
}

bool isPerfect(int num)
{
	int sum = 0;
	for (int i = 1; i < num; i++) {
		if (num % i == 0) sum += i;
	}
	return (sum == num);
}

bool isPrime(int num)
{
	if (num <= 1) return false;
	for (int i = 2; i * i <= num; i++) {
		if (num % i == 0) return false;
	}
	return true;
}

bool isStrong(int num)
{
	int sum = 0, temp = num;
	while (temp != 0) {
		int digit = temp % 10;
		sum += factorial(digit);
		temp /= 10;
	}
	return (sum == num);
}

