#include <bits/stdc++.h>
using namespace std;

int dem_uoc(int n){
	int cnt = 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			cnt++;
			while(n % i == 0){
				n/=i;
			}
		}
	}
	if(n > 1)
		cnt++;
	return cnt;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cout << dem_uoc(n) << endl;
	}
}