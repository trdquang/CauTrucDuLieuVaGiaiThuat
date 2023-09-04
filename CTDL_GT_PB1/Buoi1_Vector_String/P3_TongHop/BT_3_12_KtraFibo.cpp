#include <bits/stdc++.h>
using namespace std;

vector<long long> sinh_fibo(){
	vector<long long>v(100);
	v[0] = 0;
	v[1] = 1;
	for(int i = 2; i < 100; i++)
		v[i] = v[i-1] + v[i-2];
	
	return v;
}

int main(){
	vector<long long>v = sinh_fibo();
	int n;
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		int ok = 0;
		for(int i = 0; i < v.size(); i++){
			if(v[i] == n){
				ok = 1;
				break;
			}
		}
		if(ok)
			cout <<"YES\n";
		else
			cout <<"NO\n";
	}
}