#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main() {
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		int a, b;
		scanf("%d%d", &a, &b);

		// 최소공배수
		int x = a;
		int y = b;
		while (x != y) {
			if (x > y)
				y += b;
			else
				x += a;
		}
		printf("%d\n", x);
	}
	

	return 0;
}


