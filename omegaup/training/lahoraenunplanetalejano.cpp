//  https://omegaup.com/arena/problem/La-hora-en-un-planeta-lejado/

#include <iostream>

using namespace std;

int main() {
    int m, h, d, S; cin>>S;
    m = 50; 
    h = 3500;
    d = 42000; 
    cout<< S/d<<" ", S-=int((S/d)*d), cout<<S/h<<" ", S-=int((S/h)*h), cout<<S/m<<" ", S-=int((S/m)*m), cout<<int(S);
    return 0;
}