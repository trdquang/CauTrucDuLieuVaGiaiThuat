#include <bits/stdc++.h>
using namespace std;

int a[100], n, ok;

bool check(){
	int l = 1, r = n;
	while(l < r){
		if(a[l] != a[r])
			return false;
		l++;
		r--;
	}
	return true;
}

void init(){
	for(int i = 1; i <= n; i++)
		a[i] = 0;
}

void next(){
	int i = n;
	while(i >= 1 && a[i] == 1)
		a[i--] = 0;
	if(i == 0)
		ok = 0;
	else
		a[i] = 1;
	
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		ok = 1;
		init();
		while(ok){
			if(check()){
				for(int i = 1; i <= n; i++)
					cout << a[i];
				cout << " ";
			}
			next();
		}
		cout << endl;
	}
}