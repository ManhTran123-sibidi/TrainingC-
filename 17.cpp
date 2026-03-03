#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll maxn = 1e6;
ll a[maxn+10],n;
bool check(string s){
    for(int i=0;i<s.size();i++){
        if(s[i]==s[i-1]) return false;
    }
    return true;
}
int main() {
    int n;cin>>n;
    string s;cin>>s;
    
    return 0;
}