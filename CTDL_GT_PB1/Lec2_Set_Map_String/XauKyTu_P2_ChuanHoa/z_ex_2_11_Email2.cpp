#include <bits/stdc++.h>
#include <vector>
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

string tao_email(vector<string>v){
	string email = "";
	for(int i = 0; i < v.size()-1; i++)
		email += v[i][0];
	email += v[v.size()-1];
	email += "@gmail.com";
	return email;
}

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		vector<string>v = lay_tu(s);
		cout << tao_email(v) << endl;
	}
}

/*
2
NguYEN VAN maNH
nGUYEN thuY LinH
*/