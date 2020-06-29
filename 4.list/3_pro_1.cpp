// https://www.acmicpc.net/problem/1406
#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);

  string s;
  list<char> L;
  int num;
  cin >> s;
  for(auto c: s) L.push_back(c);
  auto cur = L.end();
  cin >> num;

  while(num--){
    char x;
    cin >> x;
    if(x=='L'){ 
      if(cur!=L.begin()) cur--;
      }
    else if(x=='D'){
      if(cur!=L.end()) cur++; 
    }
    else if(x=='B'){
     if(cur!=L.begin()) {cur--; cur = L.erase(cur);}
    }
     else{ // P
       char n;
       cin >> n;
       L.insert(cur,n);
     }
  }
  for(auto c : L) cout << c;
}