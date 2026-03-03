#include <bits/stdc++.h>
using namespace std;

bool prime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return false;
    return true;
}

int main() {
    int n; 
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    set<int> s;

    for (int i = 0; i < n; i++)
        if (prime(a[i]))
            s.insert(a[i]);

    for (int x : s)
        cout << x << " ";

    return 0;
}
