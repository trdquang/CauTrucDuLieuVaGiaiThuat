#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int>p1, pair<int, int>p2){
	if(p1.second != p2.second){
		return p1.second > p2.second;
	}
	return p1.first < p2.first;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		map<int, int>mp;
		vector<pair<int, int>>v;
		for(int i = 0; i < n; i++){
			int x;
			cin >> x;
			mp[x] ++;
		}
		
		for(auto it : mp){
			v.push_back(it);
		}
		
		sort(v.begin(), v.end(), cmp);
		for(int i = 0; i < v.size(); i++){
			for(int j = 0; j < v[i].second; j++){
				cout << v[i].first << " ";
			}
		}
		
		cout << endl;
	}
}