#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
using namespace std;

bool compare(pair<int, int>& a, pair<int, int>& b){
  if(a.second==b.second)
    return a.first<b.first;
  else
    return a.second<b.second;
}

int main() {
  cin.tie(NULL);
  cout.tie(NULL);
  
  int n, x, y;
  cin >> n;

  vector<pair<int, int>> v;
  
  for(int i=0; i<n; i++){
    cin >> x >> y;
    v.push_back({x, y});
  }

  sort(v.begin(), v.end(), &compare);

  for(int i=0; i<n; i++)
    cout << v[i].first << " " << v[i].second << "\n";
}