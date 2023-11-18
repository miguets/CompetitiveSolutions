//  https://omegaup.com/arena/problem/Repartiendo-cachorros/#problems

#include <iostream>

using namespace std;

int main() {
  int C,P,H,q; cin>>C>>P>>H; //C 
  q=P, C-=P; q+= C%(H+1);
  cout<<q;
  return 0;
}