#include<bits/stdc++.h>
using namespace std;

int ktra_nt(int n){
	if(n < 2)
		return 0;
	for(int i = 2; i <= sqrt(n); i++)
		if(n % i == 0)
			return 0;
	return 1;
}

int tinh_tong_cs(int n){
	int res = 0;
	while(n){
		res += n% 10;
		n /= 10;
	}
	return res;
}

vector <int> init_fibo(){
	vector<int>v(15);
	v[0] = 0;
	v[1] = 1;
	for(int i = 2; i < 15; i++)
		v[i] = v[i-1] + v[i-2];
	return v;
}

int kiem_tra_cs(int n, vector<int>v){
	for(int i = 0; i < v.size(); i++)
		if(v[i] == n)
			return 1;
	return 0;
}

int main(){
	vector<int>v = init_fibo();
	int l, r;
	cin >> l >> r;
	
	int ok = -1;
	
	for(int i = l; i <= r; i++){
		if(ktra_nt(i) == 1)
			if( kiem_tra_cs(tinh_tong_cs(i), v) ){
				cout << i << " ";
				ok = 1;
			}
	}
	if(ok != 1)
		cout << -1;
}