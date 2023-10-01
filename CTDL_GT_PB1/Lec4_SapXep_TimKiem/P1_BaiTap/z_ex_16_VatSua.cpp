#include <bits/stdc++.h>
using namespace std;

int vat_sua(int a[], int n){
	int res = 0;
	for(int i = 0; i < n; i++){
		res += max(0, a[i] - i);
	}
	return res;
}

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++)
		cin >> a[i];
	sort(a,  a+ n, greater<int>());
	cout << vat_sua(a, n);
}