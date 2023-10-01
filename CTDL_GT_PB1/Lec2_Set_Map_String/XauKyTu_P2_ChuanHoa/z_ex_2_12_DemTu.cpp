#include <bits/stdc++.h>
#include <map>
using namespace std;

void viet_thuong(string &s){
	for(int i = 0; i < s.size(); i++)
		s[i] = tolower(s[i]);
}

vector<string> lay_tu(string s){
	vector<string>v;
	stringstream ss(s);
	string tk;
	while(ss >> tk){
		viet_thuong(tk);
		v.push_back(tk);
	}
	return v;
}

int main(){
	string s;
	getline(cin, s);
	map<string, int> mp;
	vector<string>v = lay_tu(s);
	for(string el: v){
		mp[el]++;
	}
	
	for(string el: v){
		if(mp[el]){
			cout << el << " " << mp[el] << endl;
			mp[el] = 0;
		}
	}
}