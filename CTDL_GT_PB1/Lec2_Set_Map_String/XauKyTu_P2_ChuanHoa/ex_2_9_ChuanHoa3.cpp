#include <bits/stdc++.h>
using namespace std;

void chuan_hoa_ho(string &s){
	s[0] = toupper(s[0]);
	for(int i = 1; i < s.size(); i++)
		s[i] = tolower(s[i]);
}

void chuan_hoa_ten(string &s){
	for(int i = 0; i < s.size(); i++)
		s[i] = toupper(s[i]);
}

vector <string> lay_tu(string s){
	vector<string>v;
	stringstream ss(s);
	string tk;
	while(ss >> tk){
		v.push_back(tk);
	}
	chuan_hoa_ten(v[v.size() - 1]);
	for(int i = 0; i < v.size() - 1; i++)
		chuan_hoa_ho(v[i]);
	return v;
}

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		vector<string> v = lay_tu(s);
		cout << v[v.size() - 1] << ", ";
		for(int i = 0; i < v.size() - 1; i++)
			cout << v[i] << " ";
		cout << endl;
	}
}