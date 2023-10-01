#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		map<string, int>mp;
		stringstream ss(s);
		string tmp;
		
		string res = "";
		while(ss >> tmp){
			if(mp[tmp] > 0){
				res = tmp;
				break;
			}
			mp[tmp]++;
		}
		cout << res << endl;
	}
}