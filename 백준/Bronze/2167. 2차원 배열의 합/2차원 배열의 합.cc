#include <iostream>
using namespace std;

int main() {
  int _n, _m, k, i, j, x, y;
  cin >> _n >> _m;

  // input array elements.
  const int n = _n;
  const int m = _m;
  int arr[n][m];
  
  for(int a=0; a<n; a++){
    for(int b=0; b<m; b++){
      cin >> arr[a][b];
    }
  }

  // input coord sets
  // and retrieve outputs from input sets
  cin >> k;
  int sum = 0;
  for(int a=0; a<k; a++){
    sum = 0;
    cin >> i >> j >> x >> y;
    i--; j--; x--; y--;

    for(int b = i; b <= x; b++){
      for(int c = j; c<= y; c++){
        sum += arr[b][c];
      }
    }
    
    // if(i==x){
    //   for(int b=j; b<=y; b++)
    //     sum += arr[i][b];
    // } else {
    //   // sum of row "i"
    //   for(int b=j; b<m; b++)
    //     sum += arr[i][b];

    //   // sum of row after "i", and before "x"
    //   for(int b=i+1; b<x; b++){
    //     for(int c=0; c<m; c++){
    //       sum += arr[b][c];
    //     }
    //   }
      
    //   // sum of row "x"
    //   for(int b=0; b<=y; b++)
    //     sum += arr[x][b];
    // }

    cout << sum << "\n";
  }
}
