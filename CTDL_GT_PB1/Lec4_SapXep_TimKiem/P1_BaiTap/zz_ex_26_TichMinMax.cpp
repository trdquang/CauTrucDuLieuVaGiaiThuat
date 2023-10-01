#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		int a[n], b[m];
		
		int max = INT_MIN, min = INT_MAX;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			if(a[i] > max)
				max = a[i];
		}
		
		for(int i = 0; i < m; i++){
			cin >> b[i];
			if(b[i] < min){
				min = b[i];
			}
		}
		cout << (long long)min * max << endl;
	}
}
/*
1
3 4
1 2 3
-2 3 4 5
*/