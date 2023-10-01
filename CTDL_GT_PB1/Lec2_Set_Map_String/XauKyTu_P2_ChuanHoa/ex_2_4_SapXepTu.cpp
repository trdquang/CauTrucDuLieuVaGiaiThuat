#include <bits/stdc++.h>
#include <vector>
using namespace std;

vector<string> sap_xep(string s){
	vector<string>v;
	stringstream ss(s);
	string tk;
	while(ss >> tk)
		v.push_back(tk);
	
	sort(v.begin(), v.end());
	return v;
}

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		vector<string>v = sap_xep(s);
		for(string x: v)
			cout << x << " ";
		
		cout << endl;
	}
}