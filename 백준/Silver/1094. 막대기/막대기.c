#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	
	int arr[40] = { 0 };
	arr[0] = 64;
	int cur = 0;

	if (n == 64) {
		printf("%d", 1);
		return 0;
	}

	while (1) {
		int sum = 0;

		arr[cur] /= 2;
		cur++; arr[cur] = arr[cur - 1];

		for (int i = 0; i < cur; i++)
			sum += arr[i];
		if (sum >= n) {
			arr[cur] = 0; 
			cur--;
		}
		
		if (sum == n)
			break;
	}
	printf("%d", cur+1);

	return 0;
}