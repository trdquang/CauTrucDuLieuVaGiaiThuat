#include <bits/stdc++.h>
using namespace std;

int dem_gach(int a[], int n){
	int res = 1;
	int do_cung = a[0];
	for(int i = 1; i < n; i++){
		if(do_cung >= 1)
			res ++;
		else
			break;
		do_cung = min(do_cung - 1, a[i]);
	}
	
	return res;
}

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++)
		cin >> a[i];
	sort(a, a + n, greater<int>());
	cout << dem_gach(a, n);
}