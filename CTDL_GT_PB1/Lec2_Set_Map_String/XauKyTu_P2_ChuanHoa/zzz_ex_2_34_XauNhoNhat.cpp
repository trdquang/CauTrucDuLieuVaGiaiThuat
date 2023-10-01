#include <bits/stdc++.h>
#include <vector>
using namespace std;

vector<string> lay_tu(string s){
	vector<string> v;
	stringstream ss(s);
	string tk;
	while(ss >> tk){
		v.push_back(tk);
	}
	sort(v.begin(), v.end());
	return v;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cin.ignore();
		string s;
		getline(cin, s);
		vector<string>v = lay_tu(s);
		for(auto el: v)
			cout << el;
		cout << endl;
	}
}
/*
2
4 java python c php
5 a b cdef zabc word
*/