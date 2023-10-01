#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int>p1, pair<int, int>p2){
	return p1.second < p2.second;
}

int dem_show(pair<int, int>p[], int n){
	int res = 1;
	int kt = p[0].second;
	for(int i = 1; i < n; i++){
		if(p[i].first > kt){
			res ++;
			kt = p[i].second;
		}
	}
	
	return res;
}

int main(){
	int n;
	cin >> n;
	pair<int, int>p[n];
	for(int i = 0; i < n; i++){
		cin >> p[i].first;
		cin >> p[i].second;
	}
	
	sort(p, p + n, cmp);
	cout << dem_show(p, n);
}