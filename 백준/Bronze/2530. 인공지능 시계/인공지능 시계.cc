#include <bits/stdc++.h>
using namespace std;

int main() {
  //cin.tie(NULL);
  //cout.tie(NULL);

  int h, m, s;
  cin >> h >> m >> s;

  int t;
  cin >> t;

  int start_sec = h*60*60 + m*60 + s;
  int fin_sec = start_sec + t;

  h = fin_sec / (60*60);
  fin_sec -= h*60*60;
  
  m = (fin_sec) / 60;
  fin_sec -= m*60;
  
  s = (fin_sec);

  cout << h%24 << " " << m << " " << s;
}
