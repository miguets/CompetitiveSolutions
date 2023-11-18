//  https://omegaup.com/arena/problem/El-gran-problema-de-Pandora
#include <iostream>
#include <vector>
using namespace std;
int main(){
  vector<int> a;
  for(int i = 0, b; i<3; i++) {
    cin>> b; 
    a.push_back(b);
}
  if(a[2]==1) cout<<a[0] + a[1];
  else cout<< a[0] - a[1];
  return 0;
}