#include <bits/stdc++.h>
using namespace std;

vector<string>tach_tu(string s){
	vector<string>v;
	stringstream ss(s);
	string tk;
	while(ss >> tk)
		v.push_back(tk);
	return v;
}

void viet_thuong(string &s){
	for(int i = 0; i < s.size(); i++){
		s[i] = tolower(s[i]);
	}
}

string tao_email(vector<string>v){
	string res = "";
	for(int i = 0; i < v.size(); i++)
		viet_thuong(v[i]);
	
	res += v[v.size()-1];
	for(int i = 0; i < v.size() - 1; i++)
		res += v[i][0];
	res += "@gmail.com";	
	return res;
}

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		vector<string>v = tach_tu(s);
		cout << tao_email(v) << endl;
	}
}