/*
https://www.acmicpc.net/problem/10866
정수를 저장하는 덱(Deque)를 구현한 다음, 입력으로 주어지는 명령을 처리하는 프로그램을 작성하시오.

명령은 총 여덟 가지이다.

push_front X: 정수 X를 덱의 앞에 넣는다.
push_back X: 정수 X를 덱의 뒤에 넣는다.
pop_front: 덱의 가장 앞에 있는 수를 빼고, 그 수를 출력한다. 만약, 덱에 들어있는 정수가 없는 경우에는 -1을 출력한다.
pop_back: 덱의 가장 뒤에 있는 수를 빼고, 그 수를 출력한다. 만약, 덱에 들어있는 정수가 없는 경우에는 -1을 출력한다.
size: 덱에 들어있는 정수의 개수를 출력한다.
empty: 덱이 비어있으면 1을, 아니면 0을 출력한다.
front: 덱의 가장 앞에 있는 정수를 출력한다. 만약 덱에 들어있는 정수가 없는 경우에는 -1을 출력한다.
back: 덱의 가장 뒤에 있는 정수를 출력한다. 만약 덱에 들어있는 정수가 없는 경우에는 -1을 출력한다.
*/
#include <bits/stdc++.h>
using namespace std;

const int MX = 1000005;
int dat[2*MX+1];
int head = MX, tail = MX;

void push_front(int x){
  dat[head--] =x;
}

void push_back(int x){
  dat[++tail] =x;
}

void pop_front(){
  head++;
}

void pop_back(){
  tail--;
}

int front(){
  return dat[head+1];
}

int back(){
  return dat[tail];
}

int main(void){
 ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  while (n--)
  {
    string s; 
    cin >> s;
    if (s=="push_front"){
      int x; 
      cin >> x; 
      push_front(x);
    }else if(s=="push_back"){
       int x; 
       cin >> x; 
       push_back(x);
    }else if(s=="pop_front"){
      if(head==tail) cout << -1 << "\n";
      else{
         cout << front() << "\n";
         pop_front();
      }
    }else if(s=="pop_back"){
       if(head==tail) cout << -1 << "\n";
      else{
         cout << back() << "\n";
         pop_back();
      }
    }else if(s=="size"){
      cout << tail-head << "\n";
    }else if(s=="empty"){
       if(head==tail) cout << 1 << "\n";
      else cout << 0 << "\n";
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
