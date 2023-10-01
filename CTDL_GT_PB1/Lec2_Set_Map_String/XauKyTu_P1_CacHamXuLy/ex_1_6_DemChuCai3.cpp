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
	getline(cin, s);
	map<char, int> mp = dem_kt(s);
	int ln = -1;
	char c = 'a';
	for(pair<char, int>p:mp){
		if(p.second >= ln){
			ln = p.second;
			c = p.first;
		}
	}
	cout << c;
}