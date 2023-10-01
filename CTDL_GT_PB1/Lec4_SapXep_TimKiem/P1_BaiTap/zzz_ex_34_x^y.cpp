#include <bits/stdc++.h>
using namespace std;

int cnt[5];

int tim_lon_dau_tien(int a[], int l, int r, int x){
	int res = -1;
	while(l <= r){
		int m = (l + r)/2;
		if(a[m] > x){
			res = m;
			r = m - 1;
		}else
			l = m + 1;
	}
	return res;
}

int dem(int b[], int m, int x){
	int res = 0;
	
	if(x == 0)
		return 0;
	else if(x == 1)
		return cnt[0];
	else{
		res = cnt[0] + cnt[1];
		
		int vi_tri = tim_lon_dau_tien(b, 0, m - 1, x);
		if(vi_tri != -1)
			res += vi_tri;
		
		if(x == 2)
			res = res - cnt [3] - cnt[4];
		if(x == 3)
			res = res + cnt [2];
	}
	return res;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		for(int i = 0; i < 5; i++)
			cnt[i] = 0;
			
			
		int n, m;
		cin >> n >> m;
		int a[n], b[m];
		for(int i = 0; i < n; i++)
			cin >> a[i];
		for(int i = 0; i < m; i++){
			cin >> b[i];
			if(b[i] <= 4)
				cnt[b[i]]++;
		}
		sort(b, b + m);
		int res = 0;
		for(int i = 0; i < n; i++){
			res += dem(b, m, a[i]);
		}
		
		cout << res << endl;
	}
}