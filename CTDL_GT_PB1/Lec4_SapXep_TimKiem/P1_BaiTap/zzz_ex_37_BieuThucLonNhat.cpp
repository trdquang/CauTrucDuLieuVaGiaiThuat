#include <bits/stdc++.h>
using namespace std;

int bieu_thuc(int a[], int n, int k){
	sort(a + 1, a + n, greater<int>());
	long long res = a[0];
	for(int i = 1; i < n; i++){
		if(k >= 1)
			res += a[i];
		else
			res -= a[i];
		k--;
	}
	return res;
}

int main(){
	int n, k;
	cin >> n >> k;
	int a[n];
	for(int &x: a)	cin >> x;
	cout << bieu_thuc(a, n, k);
}