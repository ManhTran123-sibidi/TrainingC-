#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll maxn = 1e6 + 10;
ll a[maxn], L[maxn], max_left[maxn];
int n;
ll k;
int main() {
    cin.tie(NULL);
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
    int j = 1;
    max_left[0] = 0; 
    for (int i = 1; i <= n; i++) {
        while (a[i] - a[j] > k) {
            j++;
        }
        L[i] = i - j + 1;
        max_left[i] = max(max_left[i - 1], L[i]);
    }
    ll ans = 0;
    for (int i = 1; i <= n; i++) {
        int do_dai_bo_2 = L[i];
        int vtri_ket_thuc_bo_1 = i - do_dai_bo_2
        if (vtri_ket_thuc_bo_1 >= 0) {
            ans = max(ans, (ll)do_dai_bo_2 + max_left[vtri_ket_thuc_bo_1]);
        }
    }
    cout << ans;

    return 0;
}
