#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char str[6] = "";
  int flag = 0; 
  while(1){  
    scanf("%s", str);
    if(!strcmp(str, "0"))
      return 0;
    
    flag = 0;
    
    int len = strlen(str);
    for(int i=0; i<len/2; i++){
      int front = str[i];
      int rear = str[len-i-1];
      if(front != rear){
        printf("no\n");
        flag = 1;
        break;
      }
    }

    if(flag == 0)
      printf("yes\n");
  }
  
  return 0;
}