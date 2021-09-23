//https://codeforces.com/problemset/problem/230/A
#include <bits/stdc++.h>
using namespace std;
int s, n, x, y; //fuerza inicial, numero de dragones, fuerza d, bonificacion
vector <pair <int, int >> xd;
auto main()->int{
    cin >> s >> n;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        xd.push_back(make_pair(x, y));
    }
    sort(xd.begin(), xd.end());
    for (int i = 0; i < n; i++) {
        if(s <= xd[i].first){
            cout << "NO";
            return 0;
        } else {
            s += xd[i].second;
        }
    }
    cout << "YES";
}
