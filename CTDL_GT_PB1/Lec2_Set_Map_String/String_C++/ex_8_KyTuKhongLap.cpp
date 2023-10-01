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
		for(char c: s)
			mp[c]++;
		
		for(char c: s){
			if(mp[c] == 1){
				cout << c;
				mp[c] = 0;
			}
		}
		cout << endl;
	}
}