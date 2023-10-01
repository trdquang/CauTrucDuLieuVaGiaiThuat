#include <bits/stdc++.h>
using namespace std;

int tk_np_cuoi_cung(int a[], int l, int r, int x){
	int res = -1;
	while(l <= r){
		int m = (l + r)/2;
		if(a[m] == x){
			res = m;
			//tiep tuc tim ve ben phai
			l = m + 1;
		}
		else if(a[m] > x)
			//tim ve ben trai
			r = m - 1;
		else
		//tim ve ben phai
			l = m + 1;
	}
	return res;
}

int main(){
	int n, k;
	cin >> n >> k;
	int a[n];
	for(int i = 0; i < n; i++)
		cin >> a[i];
	cout << tk_np_cuoi_cung(a, 0, n-1, k);
}
/*
8 6
1 2 3 4 5 6 6 6
_________
6 4
1 1 2 0 7 8
*/