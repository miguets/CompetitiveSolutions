//  https://omegaup.com/arena/problem/Calculos-mentales-competitivos/

#include <iostream>

using namespace std;

int main() {
    long double R, ori; cin>>R; cout<<R<<" "; ori=R;
    R+=5; cout<<R<<" ";//step one
    R*=R; cout<<R<<" ";//step two
    (R/=ori/3); cout<<R<<" ";//step three
    (R=R*R*R); cout<<R<<" ";//step four
    return 0;
    
}