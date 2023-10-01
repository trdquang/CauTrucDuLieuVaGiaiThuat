/*
Dem so cap ma a[i] + a[j] < k. (hoac a[i] < k - a[j])
Ý tuong: Tim vi tri cuoi cung thoa man a[i] < k - a[j]
*/
#include <bits/stdc++.h>
using namespace std;

//tim lien tuc ve phai
int last_post(int a[], int l, int r, int x){
	int res = -1;
	while(l <= r){
		int m = (l + r)/2;
		if(a[m] < x){
			res = m;
			l = m + 1;
		}else if(a[m] >= x)
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
		for(int i = 0; i < n - 1; i++){
			int x = last_post(a, i + 1, n - 1, (k - a[i]) );
			if(x != -1)
				res += (x - i);
		}
		
		cout << res << endl;
	}
}