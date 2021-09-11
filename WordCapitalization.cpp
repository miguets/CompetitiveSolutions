//https://codeforces.com/problemset/problem/281/A
#include<bits/stdc++.h>

using namespace std;

auto main()->int{
	string a = { };
	char b;
	cin>>a;
	b = a.front();
	a.front() = toupper(b);
	cout<< a<<endl;
return 0;
}
