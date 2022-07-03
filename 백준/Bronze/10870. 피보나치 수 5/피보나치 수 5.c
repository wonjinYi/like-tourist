#include <stdio.h>
#include <string.h>
int main(){
  int n;
  scanf("%d", &n);

  int a = 1;
  int b = 1;
  if(n==0)
    printf("0");
  else if(n<=2)
    printf("1");
  else {
      for(int i=0; i<n-2; i++){
        int tmp = b;
        b = a+b;
        a = tmp;
      }
      printf("%d", b);
  }
  
  return 0;
}