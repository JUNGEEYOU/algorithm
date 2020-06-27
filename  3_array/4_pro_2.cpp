// 
#include <bits/stdc++.h>
using namespace std;


int func2(int arr[], int N){
  int arr2[100]={};
  for(int i=0; i<N; i++){
    if(arr2[arr[i]]==1) return 1;
    arr2[100-arr[i]]=1;
  }
  return 0;
}

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int arr[2]={1,52,48};
  cout << func2(arr,3);
}
