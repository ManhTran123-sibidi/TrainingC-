#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    if(n==0) cout <<"INF";
    vector<int> v;
    for(int i=1;i*i<=n;i++) {
        if(n%i==0)
    }
    return 0;
}