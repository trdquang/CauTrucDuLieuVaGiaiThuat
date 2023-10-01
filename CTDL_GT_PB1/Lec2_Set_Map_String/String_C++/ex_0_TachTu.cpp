#include <bits/stdc++.h>
#include <vector>
using namespace std;

vector<string>tach_tu(string s){
	vector<string>v;
	stringstream ss(s);
	string tk;
	while(ss >> tk)
		v.push_back(tk);
	return v;
}

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		vector<string>v = tach_tu(s);
		cout << v.size() << endl;
	}
}