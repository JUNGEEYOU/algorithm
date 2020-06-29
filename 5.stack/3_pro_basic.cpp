/*
https://www.acmicpc.net/problem/10828
 - stl stack 사용 안함. 
 
정수를 저장하는 스택을 구현한 다음, 입력으로 주어지는 명령을 처리하는 프로그램을 작성하시오.

명령은 총 다섯 가지이다.

push X: 정수 X를 스택에 넣는 연산이다.
pop: 스택에서 가장 위에 있는 정수를 빼고, 그 수를 출력한다. 만약 스택에 들어있는 정수가 없는 경우에는 -1을 출력한다.
size: 스택에 들어있는 정수의 개수를 출력한다.
empty: 스택이 비어있으면 1, 아니면 0을 출력한다.
top: 스택의 가장 위에 있는 정수를 출력한다. 만약 스택에 들어있는 정수가 없는 경우에는 -1을 출력한다.
*/ 
#include <bits/stdc++.h>
using namespace std;

const int MX = 1000005;
int dat[MX];
int pos = 0;

void push(int x){
    dat[pos++] = x;
}

void pop(){
    pos--;
}

int top(){
   return dat[pos-1];
}

int main(void) {
ios::sync_with_stdio(0);
 cin.tie(0);
 int n; 
 cin >> n;
while (n--){
  string s;
   cin >> s; 
   if(s=="push"){
    int  num;
    cin >> num;
    push(num);
   }else if(s=="pop"){
     if(pos==0) cout << -1 << '\n';
     else{
      cout << top() << '\n';
      pop();
     }
   }else if(s=="size"){
     cout << pos << '\n';
   }else if(s=="empty"){
      if(pos==0) cout << 1 << '\n';
     else cout << 0 << '\n';
   }else{
     if(pos==0) cout << -1 << '\n';
     else{
      cout << top() << '\n';
    }
   }
  }
}