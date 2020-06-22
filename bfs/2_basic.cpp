 // 너비 우선 탐색이란(bfs)? 두 항목간에 최단 경로를 찾는 것(최단 경로 문제). 예로는 1. 체스게임에서 가장 빨리 승리할 수 있는 방법을 계산하는 인공지능 2. 맞춤법 검사기( 최소한의 수정으로 맞춤법 수정) 3. 내 주변 네트워크에서 가장 가까운 의사 선생님 찾기 등 
// 이는 큐를 사용하고, 이웃을 큐에 넣고, 그 이웃을 또 큐에 넣어 가까운 것부터 최단 경로를 찾는다. 

#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second 
int board[502][502] =
{{1,1,1,0,1,0,0,0,0,0},
 {1,0,0,0,1,0,0,0,0,0},
 {1,1,1,0,1,0,0,0,0,0},
 {1,1,0,0,1,0,0,0,0,0},
 {0,1,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0} }; 
bool vis[502][502];
int n = 7, m = 10;
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,-1,1}; 
int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  queue<pair <int,int>> Q; 
  vis[0][0] = 1; 
  Q.push({0,0});
  while(!Q.empty()){
    pair <int,int> cur = Q.front(); Q.pop();
    cout << '(' << cur.X << ',' << cur.Y << ')';
    for(int i=0; i<4; i++){
      int nx = cur.X + dx[i];
      int ny = cur.Y + dy[i];
      // 1 . 범위 체크 
      if(nx < 0 || nx >=n || ny < 0 || ny >=m) continue;
      // 2. 이미 체크한 것인지, 파랑이 아닌지 
      if(vis[nx][ny] || board[nx][ny]!=1) continue;
      vis[nx][ny] = 1; 
      Q.push({nx, ny});
    }
  }
 
}