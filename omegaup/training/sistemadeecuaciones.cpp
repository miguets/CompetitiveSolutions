//  https://omegaup.com/arena/problem/Sistemas-de-ecuaciones-1sol
#include <iostream>

using namespace std;

int main() {
    double a1, b1, c1, a2, b2, c2, y ,x;
    cin >> a1 >> b1 >>c1 >>a2 >>b2 >>c2;
    y = (a2 * c1 - a1 *c2) / (a2 * b1 - a1 * b2), x = (c1 - b1 * y) / (a1);
    cout<<double(x)<<" "<<double(y);
    return 0;
}