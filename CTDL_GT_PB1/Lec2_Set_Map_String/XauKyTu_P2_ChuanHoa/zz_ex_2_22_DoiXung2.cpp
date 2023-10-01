#include <bits/stdc++.h>
using namespace std;

int ktra_dx(string s){
	map<char, int>mp;
	for(char c: s){
		mp[c]++;
	}
	int cnt = 0;
	for(auto el: mp)
		if(el.second % 2 != 0)
			cnt++;
	
	if(cnt <= 1)
		return 1;
	return 0;
}

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		if(ktra_dx(s))
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}
/*
2
aaaabbbbc
ttyz$$$$***********ywai4o43p4
*/