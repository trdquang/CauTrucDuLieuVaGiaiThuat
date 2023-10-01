#include <bits/stdc++.h>
#include <vector>

using namespace std;

vector<string> tach_tu(string s){
	stringstream ss(s);
	string tk;
	vector<string> v;
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
		for(int i = v.size()-1; i >= 0; i--)
			cout << v[i] << " ";
		cout << endl;
	}
}