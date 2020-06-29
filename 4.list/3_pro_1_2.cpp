// https://www.acmicpc.net/problem/1406
#include <bits/stdc++.h>
using namespace std;

const int MX = 1000005;
int dat[MX], pre[MX], nxt[MX];
int unused = 1;

void insert(int addr, int num){
    dat[unused] =num; 
    pre[unused] = addr;
    nxt[unused ]= nxt[addr];
    if(nxt[addr]!=-1){
    pre[nxt[addr]] = unused;
    }
    nxt[addr] = unused;
    unused++;
}

void erase(int addr){
    nxt[pre[addr]] = nxt[addr];
    if(nxt[addr]!=-1) pre[nxt[addr]] = pre[addr];
}

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  fill(pre, pre+MX, -1);
  fill(nxt, nxt+MX, -1);
}