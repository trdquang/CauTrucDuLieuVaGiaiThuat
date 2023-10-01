/*
sap xep cac phan tu theo tan xuat giam dan
neu co cung tan xuat, thi giu nguyen thu tu
sd map
*/
#include <bits/stdc++.h>
#include <vector>
using namespace std;

map<int, int>mp;

bool cmp(int a, int b){
	return mp[a] > mp[b];	
}

int main(){
	int n;
	cin >> n;
	int a[n];

	for(int i = 0; i < n; i++){
		cin >> a[i];
		mp[a[i]]++;
	}
	
	stable_sort(a, a + n, cmp);
	for(int el: a)
		cout << el << " ";
	
}
/*
8
1 1 3 3 1 2 6 5
*/