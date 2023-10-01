#include <bits/stdc++.h>
#include <map>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, x;
		cin >> n >> x;
		int a[n];
		map<int, int>mp;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			mp[a[i]]++;
		}
		cout << mp[x] << endl;
	}
}
/*
2
5 3
1 2 3 3 3
5 4
1 1 2 5 6
*/