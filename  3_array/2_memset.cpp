// #include <bits/stdc++.h>
#include </Users/jungee/stdc++.h>
using namespace std;


int main(void) {
  int a[21];
  int b[21][21];

  // 1. memset : 비추천
  memset(a, 0, sizeof a);
  memset(b, 0, sizeof b);

  // 2. for : 실수 없이 무난하게 좋음 
  for(int i=0; i < 21; i++){
    a[i] =1;
  }
  for(int i=0; i<21; i++){
    for(int j=0; j<21; j++){
      b[i][j] =  1;
    }
  }

  // 3. fill: 짧으니 익숙해진다면 추천 (http://www.cplusplus.com/reference/algorithm/fill/)
  // fill(자료구조 시작, 자료구조의 끝, 초기화 값)
  fill(a, a+21, 2);
  for(int i=0; i<21; i++) fill(b[i], b[i]+21, 2);

}