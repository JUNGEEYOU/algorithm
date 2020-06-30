/* 
정수를 저장하는 큐를 구현한 다음, 입력으로 주어지는 명령을 처리하는 프로그램을 작성하시오.

명령은 총 여섯 가지이다.

push X: 정수 X를 큐에 넣는 연산이다.
pop: 큐에서 가장 앞에 있는 정수를 빼고, 그 수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
size: 큐에 들어있는 정수의 개수를 출력한다.
empty: 큐가 비어있으면 1, 아니면 0을 출력한다.
front: 큐의 가장 앞에 있는 정수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
back: 큐의 가장 뒤에 있는 정수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
*/

#include <bits/stdc++.h>
using namespace std;

const int MX = 1000005;
int dat[MX];
int head = 0, tail = 0;

void push(int x){
    dat[tail++] =x;
}

void pop(){
    head++;
}

int front(){
    return dat[head];
}

int back(){
    return dat[tail-1];
}
int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int n;
  cin >> n;
  while(n--){
    string s; 
    cin >> s;
    if(s=="push"){
      int x; 
      cin >> x;
      push(x);
    }else if(s=="pop"){
      if(head==tail) cout << -1 << "\n";
      else{
        cout << front() << "\n";
        pop();
      } 
    }else if(s=="size"){
      cout << tail-head << "\n";
    }else if(s=="empty"){
       if(head==tail) cout << 1 << "\n";
      else{
        cout << 0 << "\n";
      } 

    }else if(s=="front"){
      if(head==tail) cout << -1 << "\n";
      else{
        cout << front() << "\n";
      } 

    }else{
       if(head==tail) cout << -1 << "\n";
      else{
        cout << back() << "\n";
      } 

    }
  }
}