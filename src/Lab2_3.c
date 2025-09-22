
#include <stdio.h>



int main() {
	int n;
	int ret;
	do {
		printf("Enter a positive integer (>=2): ");
		ret = scanf("%d", &n);
		if (ret != 1 || n < 2) {
			printf("Invalid input. Please enter a positive integer >= 2.\n");
			while(getchar() != '\n');
		}
	} while (ret != 1 || n < 2);

	int is_prime = 1; // 1 means prime, 0 means not prime
	for (int i = 2; i * i <= n; ++i) {
		if (n % i == 0) {
			is_prime = 0;
			break;
		}
	}
	if (is_prime) {
		printf("%d is a prime number.\n", n);
	} else {
		printf("%d is not a prime number.\n", n);
	}
	return 0;
}
