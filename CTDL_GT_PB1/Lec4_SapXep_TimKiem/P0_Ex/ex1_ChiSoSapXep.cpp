/*
Sap xep mang va in ra chi so mang sau khi sap xep
*/

#include <bits/stdc++.h>
#include <vector>
#include <utility>
using namespace std;

int main(){
	int n;
	cin >> n;
	pair<int, int>a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i].first;
		a[i].second = i;
	}
	
	sort(a, a+n);
	for(auto el: a)
		cout << el.second << " ";
}