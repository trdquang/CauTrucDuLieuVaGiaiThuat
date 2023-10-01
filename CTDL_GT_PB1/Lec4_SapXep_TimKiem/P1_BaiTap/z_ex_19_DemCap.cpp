#include <bits/stdc++.h>
using namespace std;

int tinh_nhom(int a[], int n, int k){
	int res = 1;
	int ok = 0;
	for(int i = 1; i < n; i++){
		if (a[i] - a[i - 1] <= k){
			continue;
		}else{
			res ++;
		}
	}
	return res;
}

int main(){
	int t;
	cin >> t;
	int cnt = 1;
	while(t--){
		int n, k;
		cin >> n >> k;
		int a[n];
		for(int i = 0; i < n; i++)
			cin >> a[i];
		sort(a, a + n);
		cout << "Case#" << cnt << ": " << tinh_nhom(a, n, k) << endl;
		cnt++;
	}
}
/*
4
7 1
2 6 1 7 3 4 9
7 2
2 6 1 7 3 4 9
5 5
15 1 20 4 17
8 10
100 200 300 400 500 600 700 800
*/