#include <stdio.h>

// Returns the factorial of n (n!)
long long factorial(int n) {
	if (n == 0 || n == 1) return 1;
	long long result = 1;
	for (int i = 2; i <= n; ++i) {
		result *= i;
	}
	return result;
}

int main() {
	int n;
	int ret;
	do {
		printf("Enter a non-negative integer: ");
		ret = scanf("%d", &n);
		if (ret != 1 || n < 0) {
			printf("Invalid input. Please enter a non-negative integer.\n");
			// Clear invalid input from buffer
			while(getchar() != '\n');
		}
	} while (ret != 1 || n < 0);
	long long result = factorial(n);
	printf("Factorial of %d is %llu\n", n, result);
	return 0;
}
