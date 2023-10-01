#include <bits/stdc++.h>
#include <map>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		map<long long, int> mp;
		for(int i = 0; i < n; i++){
			long long x;
			cin >> x;
			mp[x]++;
		}
		
		long long max_value = INT_MIN;
		int max_n = -1;
		for(pair<long long, int>p:mp){
			if(p.second > max_n){
				max_n = p.second;
				max_value = p.first;
			}
		}
		cout << max_value <<" " << max_n << endl;
	}
}
/*
1
10
1 1 2 2 2 1 4 7 8 19
*/