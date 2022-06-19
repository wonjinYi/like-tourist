#include <stdio.h>

int main() {
	int a, b;
	scanf("%d%d", &a, &b);

	// 최대공약수
	int small;
	if (a >= b)
		small = b;
	else
		small = a;

	for (int i = small; i > 0; i--) {
		if (a % i == 0 && b % i == 0) {
			printf("%d ", i);
			break;
		}
	}

	// 최소공배수
	int x = a;
	int y = b;
	while (x != y) {
		if (x>y) 
			y += b;
		else
			x += a;
	}
	printf("%d", x);

	return 0;
}


