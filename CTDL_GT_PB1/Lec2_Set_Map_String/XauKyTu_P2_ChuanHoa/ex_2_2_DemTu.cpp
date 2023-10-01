#include <bits/stdc++.h>
using namespace std;

vector <string> lay_tu(string s){
	vector<string>v;
	stringstream ss(s);
	string tmp;
	while(ss >> tmp){
		v.push_back(tmp);
	}
	return v;
}

int main(){
	string s;
	getline(cin, s);
	vector<string>v = lay_tu(s);
	cout << v.size();
}