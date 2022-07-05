#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;

  string arr[n];
  for(int i=0; i<n; i++){
    cin >> arr[i];
  }

  for(int i=0; i<n; i++){
    string flip = arr[i];
    reverse(flip.begin(), flip.end());
    
    for(int j=0; j<n; j++){
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