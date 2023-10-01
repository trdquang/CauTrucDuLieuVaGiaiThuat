#include <bits/stdc++.h>
using namespace std;

int dem(int n, int p){
	int cnt = 0;
	for(int i = 1; i <= n; i++){
		if(i % p == 0){
			int tmp = i;
			while(tmp % p == 0){
				cnt++;
				tmp /= p;
			}
		}
	}
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