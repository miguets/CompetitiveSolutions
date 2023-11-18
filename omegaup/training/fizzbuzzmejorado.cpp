//  https://omegaup.com/arena/problem/FizzBuzz-Mejorado

#include <iostream>
using namespace std;
int main() {
  int a,b,c,d; cin>>a>>b>>c>>d;
  while(a<=b){
    if(a%c==0 and a%d==0) cout<<"FizzBuzz\n";
    else if(a%c==0) cout<<"Fizz\n";
    else if(a%d==0) cout<<"Buzz\n";
    else cout<<a<<'\n';
    a++;
  }
  return 0;
}