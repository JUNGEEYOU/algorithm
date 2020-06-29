/*
https://www.acmicpc.net/problem/10828
// stl 사용함 

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

int main(void) {
 ios::sync_with_stdio(0);
 cin.tie(0);
 stack<int> S;
 int n; 
 cin >> n;
 while (n--){
   string s;
   cin >> s; 
   if(s=="push"){
    int  num;
    cin >> num; 
     S.push(num);
   }else if(s=="pop"){
     if(S.empty()) cout << -1 << '\n';
     else{
      cout << S.top() << '\n';
      S.pop();
     }
   }else if(s=="size"){
     cout << S.size()<< '\n';
   }else if(s=="empty"){
     cout << S.empty() << '\n';
   }else{
     if(S.empty()) cout << -1 << '\n';
     else{
      cout << S.top() << '\n';
    }
   }
 }

}