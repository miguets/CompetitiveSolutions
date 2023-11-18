//  https://omegaup.com/arena/problem/Encuentra-el-8/

#include <iostream>

using namespace std;
int main(){
  int n , f = 0; cin>>n;
  for(int i = 0, x; i<n; i++) {cin >> x; if(x == 8) f++;}
  cout<<f;
}