#include <bits/stdc++.h>
using namespace std;

int dem(int n){
	int cnt = 0;
	for(int i = 5; i <= n; i*=5)
		cnt += n/i;
	return cnt;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cout << dem(n) << endl;
	}
}