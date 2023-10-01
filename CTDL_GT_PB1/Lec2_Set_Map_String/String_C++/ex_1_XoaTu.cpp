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
	int t = 1;
	while(t--){
		string s, x;
		getline(cin, s);
		getline(cin, x);
		vector<string>v = tach_tu(s);
		for(auto el: v)
			if(el != x)
				cout << el <<  " ";
		cout << endl;
	}
}