#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll maxn = 1e6;
ll a[maxn+10],n;
ll gcd(ll a,ll b) {
    while(b!=0){
        int r=a%b;
        a=b;
        b=r;
    }
    return a;
}
int main() {
    freopen("ucln.INP","r",stdin);
    freopen("ucln.OUT","w",stdout);
    cin>>n;
    ll mx=-1;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<n;i++){
        mx = max(mx,gcd(a[i],a[i+1]));
    }
    cout << mx;
    return 0;
}