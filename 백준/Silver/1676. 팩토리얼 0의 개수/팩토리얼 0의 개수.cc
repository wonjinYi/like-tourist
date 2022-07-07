#include <iostream>
using namespace std;

int main() {
  //cin.tie(NULL);
  //cout.tie(NULL);
  
  int n, s, c, parsed, stringified;
  cin >> n;

  string a = "1"; // 가장 작은인덱스가 가장 작은자리
                  // e.g. 문자열 "123"은 숫자 321을 나타냄

  // 팩토리얼 연산
  for(int i=2; i<=n; i++){ // 곱해지는 숫자
    c = 0;
    for(int j=0; j<a.length(); j++){ // 문자열 순회
      parsed = a[j]-'0';
      
      s = parsed * i + c;
      c = s/10;

      stringified = (s%10)+'0';
      a[j] = stringified;
    }

    if(c>0)
      a += (c + '0');
  }
    
  // 0 세기
  int cnt = 0;
  for(int i=0; i<a.length(); i++){
    if(a[i] == '0')
      cnt++;
    else
      break;
  }
  cout << cnt;
}
