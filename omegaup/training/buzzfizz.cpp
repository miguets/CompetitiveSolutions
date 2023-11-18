//  https://omegaup.com/arena/problem/BuzzFizz/

#include <iostream>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  int a, b; cin>>a>>b;
  while(a<=b){
    if(a%15==0) cout<<"BuzzFizz\n";
    else if(a%3==0) cout<<"Buzz\n";
    else if(a%5==0) cout<<"Fizz\n";
    else cout<<a<<"\n";
    a++;
  }
  return 0;
}