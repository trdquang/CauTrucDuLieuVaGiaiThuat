#include <bits/stdc++.h>
using namespace std;

int main(){
	map<string, int > mp;
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		mp[s]++;
		if(mp[s] == 1){
			cout << s << endl;
		}else if(mp[s] > 1){
			cout << s << mp[s]-1 << endl;
		}
	}
}