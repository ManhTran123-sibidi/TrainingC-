#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll maxn = 1e6;
ll a[maxn+10],n;
int main() {
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i];
	ll best=a[1],now=a[1];
	for(int i=1;i<=n;i++){
		now = max(a[i],now+a[i]);
		best = max(best,now);
	}
	cout << best;
	return 0;
}