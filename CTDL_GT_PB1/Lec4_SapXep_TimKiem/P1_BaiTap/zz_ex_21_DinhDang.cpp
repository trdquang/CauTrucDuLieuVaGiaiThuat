#include <bits/stdc++.h>
using namespace std;

void in_dinh_dang(int a[], int n){
	int l = 0, r = n - 1;
	while(l < r){
		cout << a[r] << " " << a[l] << " ";
		l++;r--;
	}
	if(n % 2 != 0)
		cout << a[l];
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		sort(a, a + n);
		in_dinh_dang(a, n);
	}
}