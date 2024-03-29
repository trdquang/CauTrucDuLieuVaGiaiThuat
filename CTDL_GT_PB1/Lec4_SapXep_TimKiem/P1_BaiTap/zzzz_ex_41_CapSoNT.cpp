#include <bits/stdc++.h>
using namespace std;

vector<int> sang_nt(){
	vector<int>v(1000001, 1);
	v[0] = 0;
	v[1] = 0;
	for(int i = 2; i <= sqrt(1000000); i++){
		if(v[i] == 1){
			for(int j = i * i; j <= 1000000; j+=i)
				v[j] = 0;
		}
	}
	return v;	
}

int main(){
	vector<int>v = sang_nt();
	int t;
	cin >> t;
	while(t--){
		int n, cnt = 0;
		cin >> n;
		for(int i = 2; i <= n/2; i++){
			if(v[i] && v[n - i]){
				cout << i << " " << n-i << endl;
				cnt ++;
			}
		}
		if(cnt == 0)
			cout << -1 << endl;
	}
}