#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	int cnt=0;
	for (int i = 1; i <= n; i++) {
		if (i < 100)
			cnt++; 
		else { // i>=100 456 
			int a = i / 100;
			int b = (i % 100) / 10;
			int c = (i % 10);
			if (b - a == c - b)
				cnt++;
		}
	}
	printf("%d", cnt);

	return 0;
}