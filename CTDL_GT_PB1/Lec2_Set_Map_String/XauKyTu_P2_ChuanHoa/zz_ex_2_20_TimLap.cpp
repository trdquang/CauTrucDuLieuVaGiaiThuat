#include <bits/stdc++.h>
#include <map>
using namespace std;

string tim_lap(string s){
	string res = "";
	map<string, int> mp;
	stringstream ss(s);
	string tk;
	while(ss >> tk){
		if(mp[tk] > 0)
			return tk;
		mp[tk]++;
	}
	return res;
}

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		if(tim_lap(s) == "")
			cout << -1 <<endl;
		else
			cout << tim_lap(s) << endl;
	}
}