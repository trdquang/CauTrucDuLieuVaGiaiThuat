#include <bits/stdc++.h>
using namespace std;

int kiem_tra(string s){
	int x1 = (int)(s[0] - (int)'0');
	int x2 = (int)(s[s.size()-1] - (int)'0');
	if(max(x1, x2) - 2 * min(x1, x2) != 0)
		return 0;
	int l = 1, r = s.size()-2;
	while(l < r){
		if(s[l] != s[r])
			return 0;
		l++;r--;
	}
	return 1;
}

int main(){
	int t;
	cin >> t;
	cin.ignore();
	string s;
	while(t--){
		cin >> s;
		if(kiem_tra(s))
			cout <<"YES\n";
		else
			cout <<"NO\n";
	}
}