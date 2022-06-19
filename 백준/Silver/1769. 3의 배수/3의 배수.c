#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int getY(char* str) {
	int sum = 0;
	for (int i = 0; i < strlen(str); i++)
		sum += str[i]-'0';
	//printf("---------------------------------%d\n", sum);
	return sum;
}
void process(char* str, int cnt) {
	//printf("====== len : %d  | ", strlen(str));
	int y = getY(str);
	
	//printf("====== %d : %d\n", cnt, y);
	
	if (y < 10) {
		printf("%d\n", cnt);
		if (y == 3 || y == 6 || y == 9)
			printf("YES");
		else
			printf("NO");
	}
	else {
		char string[100];
		sprintf(string, "%d", y);
		
		process(string, cnt + 1);
	}
}


int main() {
	char str[1000001];
	scanf("%s", str);

	int y = getY(str);
	if (y < 10) {

		if (y == 3 || y == 6 || y == 9)
			printf("0\nYES");
		else
			printf("0\nNO");
		return 0;
	}

	process(str, 1);
	

	return 0;
}