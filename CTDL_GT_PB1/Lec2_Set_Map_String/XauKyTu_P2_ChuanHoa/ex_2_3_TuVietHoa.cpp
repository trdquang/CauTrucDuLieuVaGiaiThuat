#include <bits/stdc++.h>
using namespace std;

vector<string>lay_tu(string s){
	vector<string> v;
	stringstream ss(s);
	string tmp;
	while(ss >> tmp){
		v.push_back(tmp);
	}
	return v;
}

int ktra_hoa(string s){
	for(int i = 0; i < s.size(); i++)
		if(!(isupper(s[i])))
			return 0;
	return 1;
}

int main(){
	int t;
	cin >> t;
	cin.ignore();
	string s;
	while(t--){
		getline(cin, s);
		vector<string>v = lay_tu(s);
		int ok = 0;
		for(int i = 0; i < v.size(); i++){
			if(ktra_hoa(v[i])){
				cout << v[i] << " ";
				ok = 1;
			}
		}
		if(ok)
			cout << endl;
	}
}