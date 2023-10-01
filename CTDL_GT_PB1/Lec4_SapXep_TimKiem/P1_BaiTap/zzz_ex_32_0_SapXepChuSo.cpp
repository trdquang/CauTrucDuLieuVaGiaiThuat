#include <bits/stdc++.h>
#include <set>
using namespace std;

void lay_so(set<int> &s, int n){
	while(n){
		s.insert(n % 10);
		n /= 10;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		long long a[n];
		set<int>st;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			lay_so(st, a[i]);
		}
		
		for(int el: st)
			cout << el << " ";
		
		cout << endl;
	}
}
/*
2 3
131 11 48
4
111 222 333 446
*/