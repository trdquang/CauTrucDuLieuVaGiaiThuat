#include <bits/stdc++.h>
#include <map>

using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		map <int, int> mp;
		for(int i = 0; i < n; i++){
			int x;
			cin >> x;
			mp[x]++;
		}
		int q;
		cin >> q;
		while(q--){
			int x;
			cin >> x;
			if(mp[x])
				cout << "YES\n";
			else
				cout << "NO\n";
		}
	}
}