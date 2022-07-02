#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void push(int* stack, int* top, int elem){
  (*top)++;
  stack[*top] = elem;
}

int pop(int* stack, int* top){
  if(top==0)
    return -1;
  
  (*top)--;
  return stack[(*top)+1];
}

int top(int* stack, int* top){
  return stack[*top];
}

int main() {
  int stack[100000];
  int top = -1;
  int recentlyPushed = 0;
  
  char action[200000];
  int cur = 0;

  int flag = 0;
  
  int n;
  scanf("%d", &n);

  for(int i=0; i<n; i++){
    int m;
    scanf("%d", &m);
    
    if(m>recentlyPushed){
      for(int i=recentlyPushed+1; i<=m; i++){
        push(stack, &top, i);
        action[cur++] = '+';
      }
      recentlyPushed = m;
      
      int e = pop(stack, &top);
      if(e==-1){
        flag = 1;
        continue;
      }
      action[cur++] = '-';
    }
    else {
      int e = pop(stack, &top);
      if(m==e)
        action[cur++] = '-';
      else{
        flag = 1;
        //printf("NO");
        //return 0;
      }
    }
  }

  if(flag==0){
    for(int i=0; i<cur; i++)
      printf("%c\n", action[i]);
  } else {
    printf("NO");
  }
  
  
  
  return 0;
}