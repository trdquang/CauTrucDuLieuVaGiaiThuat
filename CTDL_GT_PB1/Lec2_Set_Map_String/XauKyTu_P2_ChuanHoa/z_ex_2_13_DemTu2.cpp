#include <bits/stdc++.h>
using namespace std;

void viet_thuong(string &s){
	for(int i = 0; i < s.size(); i++)
		s[i] = tolower(s[i]);
}

map<string, int> lay_tu(string s){
	map<string, int> mp;
	stringstream ss(s);
	string tk;
	while(ss >> tk){
		viet_thuong(tk);
		mp[tk]++;
	}
	return mp;
}

int main(){
	string s;
	getline(cin, s);
	map<string,int>mp = lay_tu(s);
	for(pair<string, int>el : mp)
		cout << el.first << " " << el.second << endl;
}