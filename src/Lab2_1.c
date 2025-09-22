#include <stdio.h>

// Returns the sum of numbers from 1 to n
int sum_to_n(int n) {
	int sum = 0;
	for (int i = 1; i <= n; ++i) {
		sum += i;
	}
	return sum;
}

int main() {
	int n;
	int ret;
	do {
		printf("Enter a positive integer: ");
		ret = scanf("%d", &n);
		if (ret != 1 || n < 1) {
			printf("Invalid input. Please enter a positive integer.\n");
			// Clear invalid input from buffer
			while(getchar() != '\n');
		}
	} while (ret != 1 || n < 1);
	int result = sum_to_n(n);
	printf("Sum from 1 to %d is %d\n", n, result);
	return 0;
}
