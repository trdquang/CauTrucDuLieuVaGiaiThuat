#include <bits/stdc++.h>
using namespace std;

char a[100];
int n, ok;

int dem(int k){
	int res = 0;
	for(int i = 1; i <= n - k + 1; i++){
		int cnt = 0;
		if(a[i] == 'A'){
			while(i <= n && a[i] == 'A'){
				cnt ++;
				i++;
			}
		}
		if(cnt == k)
			res ++;
	}
	return res;
}

void init(){
	for(int i = 1; i <= n; i++)
		a[i] = 'A';
}

void next(){
	int i = n;
	while(i >= 1 && a[i] == 'B')
		a[i--] = 'A';
	if(i == 0)
		ok = 0;
	else
		a[i] = 'B';
}

int main(){
	int k;
	cin >> n >> k;
	ok = 1;
	init();
	while(ok){
		if(dem(k) == 1){
			for(int i = 1; i <= n; i++)
				cout << a[i];
			cout << endl;
		}
		next();
	}
}