#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(NULL);
  cout.tie(NULL);
  
  int n, x;
  cin >> n;

  int sum = 0;
  int freqIdx = 0;
  
  // 인덱스 0~3999는 숫자 -4000 ~ -1에 대응.
  // 인덱스 4000은 숫자 0에 대응
  // 인덱스 4001~8000은 숫자 1~4000에 대응
  int a[8001] = {0}; 
  int b[8001] = {0}; // 누적
  
  // 계수 (a[i]의 값은 숫자i의 입력개수)  
  for(int i=0; i<n; i++){
    cin >> x;
    a[4000+x]++;  

    // 현재까지 가장 많이 입력된 숫자 저장
    if (a[4000+x] >= a[4000+freqIdx])
      freqIdx = x;

    // 현재까지 입력된 숫자의 합계 저장
    sum += x;
  }

  // 배열a에 대한 누적합 계산
  b[0] = a[0];
  for(int i=1; i<8001; i++){
    b[i] = b[i-1] + a[i];
  } 

  // -------------------------

  // 1. 산술평균
  float added = sum >= 0 ? 0.5 : -0.5;
  cout << int(float(sum)/n + added) << "\n";  
  
  // 2. 중앙값
  int halfOfN = n/2 +1;
  int median = 0;
  for(int i=0; i<8001; i++){
    if(b[i] == 0)
      continue;
    
    if(halfOfN <= b[i]){
      median = i-4000;
      break;
    }
  }
  cout << median << "\n";

  // 3. 최빈값
  { // block start
    
  int mostFreqCnt = a[4000+freqIdx];
  int tmp[8001] = {0};
  int tmpcur = 0;
  for(int i=0; i<8001; i++){
    if(a[i] == mostFreqCnt){
      tmp[tmpcur] = i-4000;
      tmpcur++;
    }
  }

  int min = 9999;
  for(int i=0; i<tmpcur; i++){
    if(tmp[i] < min)
      min = tmp[i];
  }

  int semiMin = 9999;
  for(int i=0; i<tmpcur; i++){
    if(min < tmp[i] && tmp[i] < semiMin)
      semiMin = tmp[i];
  }
  int res = semiMin==9999 ? min : semiMin;
  cout << res << "\n";
    
  } // block end
  
  
  // 4. 범위
  int min, max;
  for(int i=0; i<8001; i++){
    if(a[i] != 0){
      min = i;
      break;
    }
  }
  for(int i=8000; i>=0; i--){
    if(a[i] != 0){
      max = i;
      break;
    }
  }
  cout << max-min;
  
}
