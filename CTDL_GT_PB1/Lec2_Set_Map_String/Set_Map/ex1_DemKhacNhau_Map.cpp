#include <bits/stdc++.h>
#include <map>

using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		map <int, int> mp;
		cin >> n;
		for(int i = 0; i < n; i++){
			int x;
			cin >> x;
			mp[x]++;
		}
		
		cout << mp.size() << endl;
	}
}