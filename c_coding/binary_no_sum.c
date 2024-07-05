// C Program to Add 2 Binary Strings
// and Print their Binary Sum
#include <stdio.h>
#include <string.h>

// Function to add two Binary Strings
void sum(char b1[], char b2[], int l1, int l2)
{
	int carry = 0, temp, num1, num2, i;
	char result[100];

	result[l1 + 1] = '\0';

	// This loop will add Both Strings till
	// second have characters in it.
	while (l2 > 0) {
		num1 = b1[l1 - 1] - '0';
		num2 = b2[l2 - 1] - '0';
		temp = num1 + num2 + carry;
		if (temp >= 2) {
			carry = 1;
			temp = temp % 2;
		}
		result[l1] = temp + '0';
		l1--;
		l2--;
	}

	// This loop will add leftover
	// characters of first Strings.
	while (l1 - 1 >= 0) {
		temp = b1[l1 - 1] + carry - '0';
		if (temp >= 2) {
			carry = 1;
			temp = temp % 2;
		}
		result[l1] = temp + '0';
		l1--;
	}

	// Add last carry to result string
	if (carry) {
		result[0] = '1';
	}
	else {
		// if there is no carry then we will shift
		// each character by one place in left side.
		for (i = 0; i < strlen(result) - 1; i++) {
			result[i] = result[i + 1];
		}
		result[strlen(result) - 1] = '\0';
	}

	// printing result
	printf("%s + %s = %s\n", b1, b2, result);
}

// Driver code
int main()
{
	char b1[100] = "11", b2[100] = "11";
	int l1, l2;

	printf("Enter binary number 1: ");
	printf("%s \n", b1);
	printf("Enter binary number 2: ");
	printf("%s \n", b2);
	l1 = strlen(b1);
	l2 = strlen(b2);

	// calling function to add strings
	if (l1 > l2) {
		sum(b1, b2, l1, l2);
	}
	else {
		sum(b2, b1, l2, l1);
	}

	return 0;
}
