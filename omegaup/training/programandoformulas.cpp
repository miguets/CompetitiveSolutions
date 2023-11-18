//  https://omegaup.com/arena/problem/Programando-formulas/


#include <iostream>
#include<cmath>

double pi = acos(-1);
using namespace std;

int main() {
    double x,y,z,f; cin>>x>>y>>z;
    f = (x+x*(y+(z*z)))/((x+pi)*(y+pi));
    cout<<f;
    return 0;
}