#include <bits/stdc++.h>
using namespace std;
int main() 
{
long long n;
cin >> n;
long long g = 1;
for (long long i = 1; i <= n; i++)
    g *= i; 
    cout << g; 
return 0;    
}