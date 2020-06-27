// https://www.acmicpc.net/problem/10808
#include <bits/stdc++.h>
// #include </Users/jungee/stdc++.h>
using namespace std;

int main(void) {
  string s; 
  cin >> s;
  for(char i='a'; i<='z'; i++){
    int sum =0;
    for(char j: s){
      if(j==i){
        sum++;
      }
    }
    cout << sum <<' ';
  }
}