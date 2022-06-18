#include <stdio.h>

double fac(int a) { // 팩토리얼
	double res = 1;
	for (int i = 1; i <= a; i++)
		res *= i;
	return res;
}

int main() {
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		int n, m;
		scanf("%d%d", &n, &m);

		double res = fac(m) / (fac(m - n)*fac(n));
		printf("%.0f\n", res);
	}

	return 0;
}

