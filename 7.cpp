#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll cp(ll n) {
	ll k = sqrt(n);
	return k*k==n;
}
int main() {
	ll n;cin>>n;
	if(cp(n)) cout <<"YES";
	else cout <<"NO";
	return 0;
}