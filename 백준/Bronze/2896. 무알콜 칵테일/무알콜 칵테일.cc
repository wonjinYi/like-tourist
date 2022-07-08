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

  int v, w, u;

  // int round = 1;
  // int n = 0;
  // while(true){
  //   v = x*round; w = y*round; u = z*round;
  //   if(x-v <= 0){
  //     n = 0;
  //     break;
  //   } else if (y-w <= 0) {
  //     n = 1;
  //     break;
  //   } else if (z-u <= 0) {
  //     n = 2;
  //     break;
  //   }
  // }

  // double gorani = 0;
  // if(n==0) gorani = (double)a / x;
  // else if(n==1) gorani = (double)b / y;
  // else if(n==2) gorani = (double)c / z;

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
  
  //cout.setf(ios::fixed);
  //cout.precision(6);

  double ar = a - x*gorani;
  double br = b - y*gorani;
  double cr = c - z*gorani;

  //cout << fixed << setprecision(6) << ar << " " << br << " " << cr;
  //cout << fixed << setprecision(6) << a - x*gorani << " " << b - y*gorani << " " << c - z*gorani;
  
  // cout  << (int(ar) <= ar ? int(ar) : ar) << " " 
  //       << (int(br) <= br ? int(br) : br) << " " 
  //       << (int(cr) <= cr ? int(cr) : cr);

  //cout << ((15.0000 == 15) ? "yes" : "no") << endl;
  
}
