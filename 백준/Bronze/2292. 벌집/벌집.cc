#include <bits/stdc++.h>
using namespace std;


int main() {
  // cin.tie(NULL);
  // cout.tie(NULL);
  int n;
  cin >> n;
  
  if(n==1){
    cout << 1;
    return 0;
  }

  int sum = 1;
  int r = 6;
  while(1){
    sum += r;
    r += 6;
    if(n<=sum)
      break;
    //cout << sum << " " << r << endl;
    
  }

  cout << (r/6);
  
}

/*
1 : 1 : 1-- 1
6 : 2~7 : 7-- 2
12 : 8~19 :  -- 3
18 : 20~37 -- 4
24 : 38~61 
*/