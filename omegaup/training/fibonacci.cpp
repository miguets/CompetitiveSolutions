//  https://omegaup.com/arena/problem/Sucesion-fibonacci/
#include <bits/stdc++.h>

using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  int n;
  cin>>n;
  vector<int>a(n);
  a = {1,1};
  for(int i=0; i<n; i++){
    if(i<=1){
      cout<<a[i]<<" ";
    }
    else{
      int tmp = a[i-1] + a[i-2];
      a.push_back(tmp);
      cout<<a[i]<<" ";
    }
  }

  return 0;
}