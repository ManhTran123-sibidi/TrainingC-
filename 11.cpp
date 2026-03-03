#include <bits/stdc++.h>
using namespace std;
int main() {
	string s;cin>>s;
	string t="";
	reverse(s.begin(),s.end());
	t=s;
	int l=0;
	while(t[0]=='0'){
		l++;
	}
	for(int i=l;i<t.size();i++){
		cout<<t[i];
	}
}