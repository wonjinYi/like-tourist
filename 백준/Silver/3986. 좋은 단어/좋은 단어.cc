#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int cnt = 0;
  
  string s;
  char arr[100000];
  int cur = 0;
  for(int i=0; i<n; i++){
    cin >> s;
    cur = 0;
    for(int j=0; j<s.length(); j++){
      if(cur==0 || arr[cur-1]!=s[j]){
        arr[cur++] = s[j];
      }
      else if(arr[cur-1]==s[j]){
        cur--;
      }

      //test
      // for(int j=0; j<cur; j++)
      //   cout << arr[j];
      // cout << endl << endl;
    }
    
    if(cur==0)
      cnt++;
  }

  cout << cnt;
}
