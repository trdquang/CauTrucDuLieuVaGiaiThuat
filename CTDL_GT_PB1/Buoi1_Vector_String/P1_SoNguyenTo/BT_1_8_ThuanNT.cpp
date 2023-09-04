#include <bits/stdc++.h>
using namespace std;

vector <int> sang_doan(int l, int r){
	vector<int> v(r-l+1, 1);
	
	for(int i = 2; i <= sqrt(r); i++){
		for(int j = max(i*i, (l+i-1)/i*i);j <= r; j+=i)
			v[j - l] = 0;
	}
	
	return v;
}

int ktra_nt(int n){
	if(n < 2)
		return 0;
	for(int i = 2; i <= sqrt(n); i++)
		if(n % i == 0)
			return 0;
	return 1;
}

int ktra_so(int n){
	int sum = 0;
	while(n){
		int r = n % 10;
		if(!(r == 2 || r == 3 || r == 5 || r == 7))
			return 0;
		sum += r;
		n /= 10;	
	}
	return ktra_nt(sum);
	
}

int main(){
	int t;
	cin >> t;
	
	while(t--){
		int cnt = 0;
		int l, r;
		cin >> l >> r;
		vector<int> v = sang_doan(l, r);
		for(int i = l; i <= r; i++){
			if(v[i-l] == 1 && ktra_so(i))
				cnt++;
		}
		
		cout << cnt << endl;
	}
}