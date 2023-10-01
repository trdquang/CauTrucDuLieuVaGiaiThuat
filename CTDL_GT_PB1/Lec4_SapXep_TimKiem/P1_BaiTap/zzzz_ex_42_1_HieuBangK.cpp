#include <bits/stdc++.h>
using namespace std;

int f[100001];

void tim_cap(int a[], int n, int k){
	memset(f, 0, sizeof(f));
	for(int i = 0; i < n; i++)
		f[a[i]]++;
	for(int i = 0; i < n; i++){
		//a[i] > k => de tranh truong hop a[i] - k truy cap phan tu am
		if(a[i] > k && f[a[i] - k]){
			cout << 1 << endl;
			return;
		}
	}
	cout << -1 << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		int a[n];
		for(int i = 0; i < n; i++)
			cin >> a[i];
		tim_cap(a, n, m);
	}
}