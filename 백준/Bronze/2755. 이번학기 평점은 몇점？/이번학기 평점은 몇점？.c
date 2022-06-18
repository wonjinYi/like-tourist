#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

double convert(char* str) {
	char ch = str[0];
	double n = 0;

	if (ch == 'A')
		n = 4.0;
	else if (ch == 'B')
		n = 3.0;
	else if (ch == 'C')
		n = 2.0;
	else if (ch == 'D')
		n = 1.0;
	else
		return 0.0;

	if (str[1] == '+')
		n += 0.3;
	else if (str[1] == '-')
		n -= 0.3;

	return n;
}

int main() {
	int n;
	scanf("%d", &n);
	getchar();

	int a = 0;
	double b = 0;

	for (int i = 0; i < n; i++) {
		char str[101];
		int hakjum;
		char gradeStr[3];
		scanf("%s%d%s", str, &hakjum, gradeStr);
		getchar();
		
		
		a += hakjum;
		b += convert(gradeStr) * hakjum;
		//printf("%d %s %d %f\n", hakjum, gradeStr, a, convert(gradeStr) * hakjum);
	}

	double res = b / (double)a;
	res *= 100;
	res = (int)(res + 0.5);
	res /= 100;
	printf("%.2f", res);
	return 0;
}