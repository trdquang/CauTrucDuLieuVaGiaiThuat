#include <bits/stdc++.h>
using namespace std;

int a[100], n, ok, cnt;

void init(){
	a[1] = n;
	cnt = 1;
}

void next(){
	int i = cnt;
	while(i >= 1 && a[i] == 1)
		i--;
	if(i == 0)
		ok = 0;
	else{
		//dem so phan hoach cua 1
		int p = cnt - i + 1;
		//cap nhat cnt
		cnt = i;
		//cap nhat a[i]
		a[i]--;
		int q = p/a[i], r = p%a[i];
		if(q){
			for(int j = 1; j <= q; j++){
			a[i + j] = a[i];
			}
			cnt += q;
		}
		
		if(r){
			a[cnt + 1] = r;
			cnt ++;
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		ok = 1;
		init();
		while(ok){
			cout << "(";
			for(int i = 1; i <= cnt - 1; i++)
				cout << a[i] << " ";
			cout << a[cnt] << ") ";
			next();
		}
		cout << endl;
	}
}