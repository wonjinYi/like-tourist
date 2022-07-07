#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  //cin.tie(NULL);
  //cout.tie(NULL);
  
  int n;
  cin >> n;

  //input
  string *a[51];
  int cur[51] = {0};
  for(int i=1; i<=50; i++)
    a[i] = new string[n];

  string word;
  int idx;
  for(int i=0; i<n; i++) {
    cin >> word;
    idx = word.length();
    a[idx][ cur[idx] ] = word;

    cur[idx]++;
  }

  //sort
  for(int i=1; i<=50; i++){
    sort(a[i], a[i] + cur[i]);
  }

  //output(print)
  string prev = "";
  for(int i=1; i<=50; i++){
    for(int j=0; j<cur[i]; j++){
      if(prev != a[i][j])
        cout << a[i][j] << "\n";
      prev = a[i][j];
    }
  }
}
