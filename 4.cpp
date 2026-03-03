#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    bool dangTang = true;
    bool daTang = false;
    bool daGiam = false;
    for(int i = 0; i < n - 1; i++) {
        if(a[i+1] == a[i]) {
            cout << "NO";
            return 0;
        }
        if(dangTang) {
            if(a[i+1] > a[i]) {
                daTang = true;
            } else {
                dangTang = false;
                daGiam = true;
            }
        } else {
            if(a[i+1] < a[i]) {
                daGiam = true;
            } else {
                cout << "NO";
                return 0;
            }
        }
    }
    if(daTang && daGiam) cout << "YES";
    else cout << "NO";
}
