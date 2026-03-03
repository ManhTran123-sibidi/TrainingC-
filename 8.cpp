#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	double a,b;cin>>a>>b;
	char d;cin>>d;
	if(d=='+') cout << fixed << setprecision(2) << a+b;
	else if(d=='-') cout << fixed << setprecision(2) << a-b;
	else if(d=='*') cout << fixed << setprecision(2) << a*b;
	else if(d=='/') {
		if(b==0)cout <<"Math Error";
		else cout << fixed << setprecision(2)<<a/b; 
	}
	return 0;
}