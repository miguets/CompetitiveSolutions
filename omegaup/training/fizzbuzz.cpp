//  https://omegaup.com/arena/problem/FizzBuzz/

#include <iostream>

using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  int a = 1;
  while(a<=1000){
    if(a%3 ==0 and a%5 == 0) cout<<"FizzBuzz\n";
    else if(a%3 == 0) cout<<"Fizz\n";
    else if(a%5 == 0) cout<<"Buzz\n";
    else cout<<a<<"\n";
    a++;
  }
  return 0;
}