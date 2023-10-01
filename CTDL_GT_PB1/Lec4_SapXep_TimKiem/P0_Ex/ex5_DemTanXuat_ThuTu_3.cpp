/*
sap xep cac phan tu theo tan xuat giam dan
neu co cung tan xuat, thi giu nguyen thu tu
sd map
*/
#include <bits/stdc++.h>
#include <vector>
using namespace std;

bool cmp(pair<int, int> p1, pair<int, int>p2){
	return p1.second > p2.second;	
}

int main(){
	int n;
	cin >> n;
	int a[n];
	map<int, int> mp;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		mp[a[i]]++;
	}
	
	vector<pair<int, int>> v;
	pair<int, int>tmp;
	for(int i = 0; i < n; i++){
		if(mp[a[i]]){
			tmp.first = a[i];
			tmp.second = mp[a[i]];
			v.push_back(tmp);
			mp[a[i]] = 0;
		}
	}
	
	
	stable_sort(v.begin(), v.end(), cmp);
	for(int i = 0; i < v.size(); i++){
		for(int j = 0; j < v[i].second; j++){
			cout << v[i].first << " ";
		}
	}
}
/*
8
1 1 3 3 1 2 6 5
*/