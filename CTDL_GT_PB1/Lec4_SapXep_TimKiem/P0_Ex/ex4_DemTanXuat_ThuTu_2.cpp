//sap xep phan tu theo tan xuat giam dan
//co cung tan xuat, in ra so nho hon
//sd map
#include <bits/stdc++.h>
#include <vector>
using namespace std;

bool cmp(pair<int, int> p1, pair<int, int>p2){
	if(p1.second != p2.second){
		return p1.second > p2.second;
	}else{
		return p1.first < p2.first;
	}
}

int main(){
	int n, x;
	cin >> n;
	map<int, int> mp;
	for(int i = 0; i < n; i++){
		cin >> x;
		mp[x]++;
	}
	
	vector<pair<int, int>> v;
	for(auto el: mp){
		v.push_back(el);
	}
	
	sort(v.begin(), v.end(), cmp);
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