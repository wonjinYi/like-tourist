#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main() {
	int n;
	scanf("%d", &n);

	long long a = 0;
	long long b = 1;

	if (n <= 1) {
		printf("%d", n);
		return 0;
	}

	for (int i = 0; i < n - 1; i++) {
		long long sum = a + b;
		a = b;
		b = sum;
		//printf("== %d ==a : %d , b : %d \n", i, a, b);
	}

	printf("%lld", b);
	return 0;
}


