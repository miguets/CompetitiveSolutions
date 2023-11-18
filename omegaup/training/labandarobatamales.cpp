//https://omegaup.com/arena/problem/La-banda-robatamales

#include <iostream>

using namespace std;
int soba(int x, int y){
    if(x%y!=0) return x%y;
    else return 0;
}

int main() {
    int T,B,TC; cin>>T>>B;
    if(T%2 == 0) TC = T/2, T-=TC;
    else TC = (T/2)+1, T-=TC;
    TC += soba(T, B-1);
    cout<<TC;
    return 0;
}