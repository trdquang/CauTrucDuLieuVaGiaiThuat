#include <bits/stdc++.h>
using namespace std;

vector<char>sap_xep(string s){
	vector<char>v;
	for(char c: s)
		v.push_back(c);
	sort(v.begin(), v.end());
	return v;
}

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		cin >> s;
		vector<char>v = sap_xep(s);
		for(char c:v)
			cout <<c;
		cout << endl;
	}
}