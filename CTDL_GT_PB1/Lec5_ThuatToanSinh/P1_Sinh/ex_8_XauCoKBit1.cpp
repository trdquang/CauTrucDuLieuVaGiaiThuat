#include <bits/stdc++.h>
using namespace std;

int a[100], n, ok;

int dem_bit_1(){
	return accumulate(a,a + n + 1, 0);
}

void init(){
	for(int i = 1; i <= n; i++)
		a[i] = 0;	
}

void next(){
	int i = n;
	while(i >= 1 && a[i] == 1)
		a[i--] = 0;
	
	if(i == 0)
		ok = 0;
	else
		a[i] = 1;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int k;
		cin >> n >> k;
		ok = 1;
		init();
		while(ok){
			if(dem_bit_1() == k){
				for(int i = 1; i <= n; i++)
					cout << a[i];
				cout << endl;
			}
			next();
		}
	}
}