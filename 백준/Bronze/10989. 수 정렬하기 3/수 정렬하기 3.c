#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
  int n, m;  
  scanf("%d", &n);

  int cnt[10001] = { 0 };
  int* result = (int*)malloc(sizeof(int)*n);
  
  // cnt배열 입력 (카운팅)
  for(int i=0; i<n; i++){
    scanf("%d", &m);
    cnt[m]++;
  }

  // 출력
  for(int i=1; i<=10000; i++){
    for(int j=0; j<cnt[i]; j++){
      printf("%d\n", i);
      }
  }
  
  return 0;
}