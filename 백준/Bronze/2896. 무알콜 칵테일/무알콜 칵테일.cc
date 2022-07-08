#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
  //cin.tie(NULL);
  //cout.tie(NULL);
  ios_base::sync_with_stdio(false);
  int a, b, c;
  int x, y, z;
  cin >> a >> b >> c;
  cin >> x >> y >> z;

  double arr[3] = {(double)a/x, (double)b/y, (double)c/z};
  sort(arr, arr+3);
  double gorani = arr[0];

  cout.precision(6);
  cout.setf(ios::fixed);
  double res[3] = { a - x*gorani, b - y*gorani, c - z*gorani };
  for(int i=0; i<3; i++){
    if (res[i] == int(res[i])) {
      cout.precision(0);
      cout << res[i];
    } else {
      cout .precision(6);
      cout << res[i];
    }
    
    if( i<2 )
      cout << " ";
  }
}
