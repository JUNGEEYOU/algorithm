#include <bits/stdc++.h>
using namespace std;
void print_number(int n){
    if(n ==0){
        return;
    }else{
        cout << n << '\n';
        print_number(n-1);
    }
}

int sum_number(int n){
    if(n ==0){
        return 0;
    }else{
       return n + sum_number(n-1);
    }
}

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  print_number(10);
  cout << sum_number(10);
}