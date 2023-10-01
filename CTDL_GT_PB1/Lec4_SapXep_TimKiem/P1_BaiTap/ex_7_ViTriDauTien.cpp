#include <bits/stdc++.h>
using namespace std;

int tim_lower(int a[], int l, int r, int x){
	int res = -1;
	while(l <= r){
		int m = (l + r)/2;
		if(a[m] == x){
			res = (m + 1);
			r = m - 1;
		}else if(a[m] > x){
			r = m - 1;
		}else if(a[m] < x){
			l = m + 1;
		}
	}
	
	return res;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, x;
		cin >> n >> x;
		int a[n];
		for(int i = 0; i < n; i++)
			cin >> a[i];
		sort(a, a + n);
		cout << tim_lower(a, 0, n - 1, x) << endl;
	}
}
/*
2
5 3
1 2 3 3 3
5 4
1 1 2 5 6
*/