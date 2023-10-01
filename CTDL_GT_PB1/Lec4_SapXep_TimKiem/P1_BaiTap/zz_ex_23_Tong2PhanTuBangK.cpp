#include <bits/stdc++.h>
#include <map>
using namespace std;

//nlogn
//lien tuc ve trai
int tim_dau_tien(int a[], int l, int r, int x){
	int res = -1;
	while(l <= r){
		int m = (l + r)/2;
		if(a[m] == x){
			res = m;
			r = m - 1;
		}else if(a[m] < x){
			l = m + 1;
		}else
			r = m - 1;
	}
	return res;
}

//lien tuc ve phai
int tim_cuoi_cung(int a[], int l, int r, int x){
	int res = -1;
	while(l <= r){
		int m = (l + r)/2;
		if(a[m] == x){
			res = m;
			l = m + 1;
		}else if(a[m] < x){
			l = m + 1;
		}else
			r = m - 1;
	}
	return res;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int a[n];
	 
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		sort(a, a + n);
		int res = 0;
			int l = tim_dau_tien(a, i + 1, n - 1, k - a[i]);
			int r = tim_cuoi_cung(a, i + 1, n - 1, k - a[i]);

			if(l != -1)
				res = res + (r - l + 1);
		}
		
		cout << res << endl;
	}
}