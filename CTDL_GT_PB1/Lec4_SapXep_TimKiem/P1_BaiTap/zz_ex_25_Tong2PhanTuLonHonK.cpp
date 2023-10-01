#include <bits/stdc++.h>
using namespace std;

//tim vi tri dau tien (> k - a[i])
//tim lien tuc ve trai
int pos(int a[], int l, int r, int k){
	int res = -1;
	while(l <= r){
		int m = (l + r)/2;
		if(a[m] > k){
			res = m;
			r = m - 1;
		}else{
			l = m + 1;
		}
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
			int x = pos(a, i + 1, n - 1, (k - a[i]) );
			if(x != -1)
				res += (n - x);
		}
		
		cout << res << endl;
	}
}