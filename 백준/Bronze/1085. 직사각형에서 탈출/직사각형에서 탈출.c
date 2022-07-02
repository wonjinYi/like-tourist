#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int x,y,w,h;
  scanf("%d%d%d%d", &x, &y, &w, &h);

  int a,b;
  a = (x<w-x) ? x : w-x;
  b = (y<h-y) ? y : h-y;
  printf("%d", a<b ? a : b);
  
  return 0;
}