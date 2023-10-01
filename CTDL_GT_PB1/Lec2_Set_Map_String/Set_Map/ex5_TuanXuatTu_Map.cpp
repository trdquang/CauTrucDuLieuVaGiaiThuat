#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		map<char, int> mp;
		for(int i = 0; i < s.size(); i++){
			mp[s[i]]++;
		}
		
		int max = -1;
		char c = 'a';
		for(pair<char, int>p:mp){
			if(p.second > max){
				max = p.second;
				c = p.first;
			}
		}
		cout << c << endl;
	}
}