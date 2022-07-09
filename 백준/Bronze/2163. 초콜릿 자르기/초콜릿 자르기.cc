#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
  //cin.tie(NULL);
  //cout.tie(NULL);
  int m, n;
  cin >> m >> n;

  // for(int i=0; i<m; i++){
  //   for(int j=0; j<n; j++){
  //     cout << "ㅁ ";
  //   }
  //   cout << endl;    
  // }

  int cnt = 0;
  cnt += m-1;
  cnt += m*(n-1);

  cout << cnt;
}
