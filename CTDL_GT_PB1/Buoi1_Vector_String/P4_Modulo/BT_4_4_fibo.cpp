#include <bits/stdc++.h>
using namespace std;

vector<long long> fibo(){
	int m = 1000000007;
	vector<long long>v(1001);
	v[0] = 0;
	v[1] = 1;
	for(int i = 2; i <= 1000; i++)
		v[i] = (v[i - 1] + v[i - 2])%m;
	
	return v;
}

int main(){
	vector <long long>v = fibo();
	int t;
	cin >> t;
	int n;
	while(t--){
		cin >> n;
		cout << v[n - 1] << endl;
	}
}