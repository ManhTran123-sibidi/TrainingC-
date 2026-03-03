#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e6;
#define ll long long
ll a[maxn+10];
ll n;
void solve() {
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> a[i];
    ll cur = a[1], best1 = a[1];
    for(int i = 2; i <= n; i++){
        cur = max(a[i], cur + a[i]);
        best1 = max(best1, cur);
    }    
    ll sum = 0;
    for(int i = 1; i <= n; i++){
        if(a[i] > 0) sum += a[i];
    }
    ll best2;
    if(sum > 0) best2 = sum;
    else{
        best2 = a[1];
        for(int i = 1; i <= n; i++)
            best2 = max(best2, a[i]);
    }   
    cout << best2 << " " << best1 << "\n";
}
int main() {
	int t;cin>>t;
	while(t--) {
solve();
	}
}