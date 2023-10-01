#include <bits/stdc++.h>
using namespace std;

map<char, int> dem_kt(string s){
	map<char, int> mp;
	for(int i = 0; i < s.size(); i++)
		mp[s[i]]++;
	
	return mp;
}

int main(){
	string s;
	cin >> s;
	map<char, int>mp = dem_kt(s);
	for(int i = 0; i < s.size(); i++){
		if(mp[s[i]]){
			cout << s[i] << " " << mp[s[i]] << endl;
			mp[s[i]] = 0;
		}
	}
}