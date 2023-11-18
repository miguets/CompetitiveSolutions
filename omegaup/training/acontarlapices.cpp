//  https://omegaup.com/arena/problem/A-Contar-Lapices-2/

#include <iostream>
using namespace std;
int main() {
  int n, k, l = 0, x; cin>>n>>k;
  while(n--){cin>>x; if(x == k) l++;}
  cout<<l;
  return 0;
}