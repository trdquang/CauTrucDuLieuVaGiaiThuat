#include <bits/stdc++.h>
using namespace std;

int tk(int a[], int n, int x){
	for(int i = 0; i < n; i++)
		if(a[i] == x)
			return 1;
	
	return 0;
}

int main(){
	int n, k;
	cin >> n >> k;
	int a[n];
	for(int i = 0; i < n; i++)
		cin >> a[i];
	cout << tk(a, n, k);
}
/*
5 3
1 2 3 4 5
_________
6 4
1 1 2 0 7 8
*/