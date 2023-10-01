//dem tan xuat mang va in ra theo thu tu tang dan
#include <bits/stdc++.h>
#include <map>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];
	map<int, int>mp;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		mp[a[i]]++;
	}
	
	for(auto el: mp){
		cout << el.first << " " << el.second << endl;
	}
}
/*
8
1 1 3 3 1 2 5 6
*/