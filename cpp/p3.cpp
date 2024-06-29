// C++ code to demonstrate star pattern
#include <iostream>
using namespace std;

// Function to demonstrate printing pattern
void pypart2(int n)
{
	// number of spaces
	int k = 2 * n - 2;

	// Outer loop to handle number of rows
	// n in this case
	for (int i = n; i > 0; i--) {

		// Inner loop to handle number spaces
		// values changing acc. to requirement
		for (int j = 0; j < n - i; j++)
			cout << " ";

		// Decrementing k after each loop
		k = k - 2;

		// Inner loop to handle number of columns
		// values changing acc. to outer loop
		for (int j = 0; j < i; j++) {
			// Printing stars
			cout << "* ";
		}

		// Ending line after each row
		cout << endl;
	}
}

// Driver Code
int main()
{
	int n = 5;

	// Function Call
	pypart2(n);
	return 0;
}
