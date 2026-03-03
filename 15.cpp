#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll maxn = 1e6;
ll d[maxn+10];
int main() {
    int t;cin>>t;
    for(int i=1;i<=maxn;i++){
        for(int j=i;j<=maxn;j+=i){
            d[j]++;
        }
    }
    while(t--){
        int dem=0;
        int a,b;cin>>a>>b;
        for(int i=a;i<=b;i++){
            if(i%3==0&&d[i]==9) dem++;
        }
        cout << dem<<"\n";
    }
    return 0;
}