#include <bits/stdc++.h>
using namespace std;

int main(void) {
  list<int> L = {1,2};
  list<int>::iterator t = L.begin();  
  L.push_front(10);
  cout << *t << '\n';  // 1 
  L.push_back(5);
  L.insert(t,6); // 10 6 1 2 5 
  t++; // 2
  t = L.erase(t); // 5 
  cout << *t << '\n';
  for(auto i: L) cout << i << ' ';
  cout << '\n';
  for(list<int>::iterator it = L.begin(); it!=L.end(); it++) cout << *it <<' ';


}