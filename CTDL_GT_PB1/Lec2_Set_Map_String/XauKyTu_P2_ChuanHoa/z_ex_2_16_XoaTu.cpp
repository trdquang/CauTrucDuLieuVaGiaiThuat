#include <bits/stdc++.h>
using namespace std;

vector<string>lay_tu(string s){
	vector<string> v;
	stringstream ss(s);
	string tk;
	while(ss >> tk)
		v.push_back(tk);
	return v;
}

int main(){
	string s, t1;
	getline(cin, s);
	getline(cin, t1);
	vector<string>v = lay_tu(s);
	for(string el: v)
		if(el != t1)
			cout << el << " ";
}