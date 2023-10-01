#include <bits/stdc++.h>
#include <vector>
using namespace std;

bool cmp(string x, string y){
	if(x.size() != y.size())
		return x.size() < y.size();
	else{
		return x < y;
	}
}

vector <string> lay_tu(string s){
	vector<string> v;
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
		vector<string>v = lay_tu(s);
		sort(v.begin(), v.end(), cmp);
		for(string el: v)
			cout << el <<" ";
		cout << endl;
	}
}