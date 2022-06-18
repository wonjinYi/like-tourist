#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int getNum(int n) {
	//int m = 0;
	for (int i = 1; i < 1000; i++) {
		for (int j = 0; j < i; j++) {
			n--;
			if (n == 0) return i;
		}
	}
	return n;
}

int main() {
	int a, b;
	scanf("%d%d", &a, &b);

	int sum=0;
	for (int i = a; i <= b; i++) {
		sum += getNum(i);
	}

	printf("%d", sum);

	return 0;
}