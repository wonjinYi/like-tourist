#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;

  string arr[n];
  for(int i=0; i<n; i++){
    cin >> arr[i];
  }

  //1. 펠린드롬인지 확인
  for(int i=0; i<n; i++){
    string flip = arr[i];
    reverse(flip.begin(), flip.end());

    if( !arr[i].compare(flip) ){
      int len = arr[i].length();
      int idx = int(len/2);
      cout << len << " " << arr[i][idx];
      return 0;
    }
  }  
  
  //2. 뒤집힌거 있는지 확인
  for(int i=0; i<n; i++){
    string flip = arr[i];
    reverse(flip.begin(), flip.end());
    
    for(int j=i; j<n; j++){
      if( !arr[j].compare(flip) ){
        int len = arr[j].length();
        int idx = int(len/2);
        cout << len << " " << arr[j][idx];
        return 0;
      }
    }
  }
  
  return 0;
}