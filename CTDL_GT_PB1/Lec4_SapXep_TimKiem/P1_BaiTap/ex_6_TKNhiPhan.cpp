#include <bits/stdc++.h>
using namespace std;

int tk_np(int a[], int l, int r, int x){
	while(l <= r){
		int m = (l + r)/2;
		if(a[m] == x)
			return 1;
		else if(a[m] > x)
			return tk_np(a, l, m - 1, x);
		else
			return tk_np(a, m + 1, r, x);
	}
	return 0;
}

int main(){
	int n, k;
	cin >> n >> k;
	int a[n];
	for(int i = 0; i < n; i++)
		cin >> a[i];
	cout << tk_np(a, 0, n-1, k);
}
/*
5 3
1 2 3 4 5
_________
6 4
1 1 2 0 7 8
*/