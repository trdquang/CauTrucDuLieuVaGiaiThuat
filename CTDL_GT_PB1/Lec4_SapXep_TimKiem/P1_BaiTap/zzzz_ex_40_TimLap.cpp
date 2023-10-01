#include <bits/stdc++.h>
using namespace std;

int f[1000001];

int tim_lap(int a[], int n){
	memset(f, 0, sizeof(f));
	for(int i = 0; i < n; i++){
		if(f[a[i]] == 1)
			return a[i];
		f[a[i]]++;
	}
	
	return -1;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin >> a[i];
		cout << tim_lap(a, n) << endl;
	}
}
/*
2 
5
1 2 3 4 5
6
10 20 30 30 20 5 7
*/