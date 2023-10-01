#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		map<string, int> mp;
		stringstream ss(s);
		string tmp;
		while(ss >> tmp){
			mp[tmp] ++;
		}
		
		int max = -1;
		string res = "";
		for(pair<string, int>p:mp){
			if(p.second > max){
				max = p.second;
				res = p.first;
			}
		}
		cout << res << endl;
	}
}