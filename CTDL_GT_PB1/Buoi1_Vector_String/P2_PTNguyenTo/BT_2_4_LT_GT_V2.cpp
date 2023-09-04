#include <bits/stdc++.h>
using namespace std;

int dem(int n, int p){
	int cnt = 0;
	for(int i = p; i <= n; i*=p)
		cnt += n/i;
	return cnt;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, p;
		cin >> n >> p;
		cout << dem(n, p) << endl;
	}
}