#include <bits/stdc++.h>
using namespace std;

int main(){
	map<int, int>mp;
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
		mp[a[i]]++;
	}
	long long sum = 0;
	for(auto el: mp){
		int x = el.second;
		sum += x * (x - 1)/2;
	}
	cout << sum;
}