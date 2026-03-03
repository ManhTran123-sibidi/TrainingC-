#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    freopen("KiTuChung.INP","r",stdin);
    freopen("KiTuChung.OUT","w",stdout);
    string x,y;cin>>x>>y;
    set<char> se;
    set<char> se2;
    for(int i=0;i<x.size();i++) {
        se.insert(x[i]);
    }
    for(int i=0;i<y.size();i++){
        se2.insert(y[i]);
    }
    for (char c : se) {
    if (se2.count(c)) {
        cout << c << "\n";
    }
}
}
