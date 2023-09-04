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

int ktra_tang(int n){
	int x = n % 10;
	n/=10;
	while(n){
		if(n % 10 >= x)
			return 0;
		x = n % 10;
		n /= 10;
	}
	return 1;
}

int ktra_giam(int n){
	int x = n % 10;
	n/=10;
	while(n){
		if(n % 10 <= x)
			return 0;
		x = n % 10;
		n /= 10;
	}
	return 1;
}

int main(){
	vector <int>v = sang_nt();
	int n;
	cin >> n;
	int cnt = 0;
	for(int i = pow(10, n-1); i < pow(10, n); i++){
		if(v[i] && (ktra_giam(i) || ktra_tang(i)))
			cnt++;
	}
	cout << cnt;
}
