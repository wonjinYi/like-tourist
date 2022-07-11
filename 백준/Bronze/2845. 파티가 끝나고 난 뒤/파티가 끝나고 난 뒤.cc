#include <iostream>
using namespace std;

int main() {
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  int a,b;
  cin >> a >> b;
  a *= b;
  for(int i=0; i<5; i++){
    cin >> b;
    cout << b-a << " ";
    }
}
