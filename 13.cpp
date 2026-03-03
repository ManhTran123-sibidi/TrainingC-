#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	freopen("tichln.INP","r",stdin);
    freopen("tichln.OUT","w",stdout);
	ll a, b, c; cin >> a >> b >> c;
    ll mx = max({a*b, b*c, a*c});
	cout << mx;
}