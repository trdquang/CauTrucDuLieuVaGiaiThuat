#include <bits/stdc++.h>
using namespace std;

void chuan_hoa(string &s){
	s[0] = toupper(s[0]);
	for(int i = 1; i < s.size(); i++)
		s[i] = tolower(s[i]);
}

vector <string> lay_tu(string s){
	vector<string>v;
	stringstream ss(s);
	string tk;
	while(ss >> tk){
		chuan_hoa(tk);
		v.push_back(tk);
	}
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
		for(string str: v)
			cout << str << " ";
		cout << endl;
	}
}