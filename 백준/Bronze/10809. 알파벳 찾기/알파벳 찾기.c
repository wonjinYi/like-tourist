#include <stdio.h>
#include <string.h>
int main(){
  char a[101];
  scanf("%s", a);

  int flag = 0;
  for(char ch='a'; ch<='z'; ch++){
    flag = 0;
    for(int i=0; i<strlen(a); i++){
      if(a[i] == ch){
        printf("%d ", i);
        flag = 1;
        break;
      }
    }  
    if(flag == 0)
      printf("%d ", -1);
  }
  
  return 0;
}