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

void viet_thuong_hoa(string &s){
	s[0] = toupper(s[0]);
	for(int i = 1; i < s.size(); i++){
		s[i] = tolower(s[i]);
	}
}

void chuan_hoa(vector<string>v){
	for(int i = 0; i < v.size(); i++)
		viet_thuong_hoa(v[i]);
	
	cout <<v[v.size() - 1] << ", ";
	for(int i = 0; i < v.size()-1; i++){
		cout << v[i] << " ";
	}
	
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		vector<string>v = tach_tu(s);
		chuan_hoa(v);
	}
}
/*
2
NguYEN   VAN           maNH
        nGUYEN          thuY       LinH
*/