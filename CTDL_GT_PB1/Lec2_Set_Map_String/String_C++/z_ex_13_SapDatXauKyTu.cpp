#include <bits/stdc++.h>
#include <map>
using namespace std;

bool ktra(string s){
	map<char, int>mp;
	for(char c: s)
		mp[c] ++;
	int res = s.size()/2 + s.size()%2;
	for(auto it: mp){
		if(it.second > res)
			return false;
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
		if(ktra(s))
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}