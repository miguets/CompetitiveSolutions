//  https://omegaup.com/arena/problem/Contar-A/

#include <iostream>

int main() {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);
  char u = '.', x; int a=0;
  while(std::cin>>x and x!=u) if(x=='A') a++;
  std::cout<<a;
  return 0;
}