//#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main() {
  //cin.tie(NULL);
  //cout.tie(NULL);

  int h, m, s;
  //cin >> h >> m >> s;
  scanf("%d%d%d", &h, &m, &s); 
    
  int t;
  //cin >> t;
  scanf("%d", &t);
    
  int start_sec = h*60*60 + m*60 + s;
  int fin_sec = start_sec + t;

  h = fin_sec / (60*60);
  fin_sec -= h*60*60;
  
  m = (fin_sec) / 60;
  fin_sec -= m*60;
  
  s = (fin_sec);

  //cout << h%24 << " " << m << " " << s;
  printf("%d %d %d", h%24, m, s);
}
