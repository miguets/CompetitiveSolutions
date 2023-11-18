//  https://omegaup.com/arena/problem/El-Pesado-del-Dr-Epimeteo/

#include <iostream>

using namespace std;

int main() {
  int d = 0,ina, n = 0;
  ios_base::sync_with_stdio(false);
  while(cin>>ina) d+=ina, n++;
  cout<<n<<" "<<d;
  return 0;
}