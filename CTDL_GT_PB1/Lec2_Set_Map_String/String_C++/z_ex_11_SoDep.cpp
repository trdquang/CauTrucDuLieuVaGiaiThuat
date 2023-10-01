#include <bits/stdc++.h>
using namespace std;

bool ktra_sd(string s){
	int l = 0, r = s.size() - 1;
	while(l <= r){
		if(s[l] != s[r])
			return false;
		if((int)(s[l] - '0') % 2 != 0)
			return false;
		l++;
		r--;
	}
	return true;
}

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		if(ktra_sd(s))
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}