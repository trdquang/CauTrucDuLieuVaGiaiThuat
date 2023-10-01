#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		int a[n], b[m];
		map<int, int> mp;
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		
		for(int j = 0; j < m; j++){
			cin >> b[j];
			mp[b[j]]++;
		}
		
		int cnt = 0;
		for(int i = 0; i < n; i++){
			if(mp[a[i]] == 0){
				cnt ++;
				cout << a[i] << " ";
			}
		}
		
		if(cnt == 0)
			cout << "NOT FOUND";
		cout << endl;
	}
}