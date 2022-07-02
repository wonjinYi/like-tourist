#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int arr[3];
  while(1){
    
  
    for(int i=0; i<3; i++)
      scanf("%d", &arr[i]);

    if(arr[0]==0)
      return 0;

    if(arr[0]>arr[1]){
      int tmp = arr[0];
      arr[0] = arr[1];
      arr[1] = tmp;
    }
    if(arr[1]>arr[2]){
      int tmp = arr[1];
      arr[1] = arr[2];
      arr[2] = tmp;
    }
      
    int left = arr[0]*arr[0] + arr[1]*arr[1];
    int right = arr[2]*arr[2];
    printf("%s\n", left==right ? "right" : "wrong");
    
  }

  
  return 0;
}