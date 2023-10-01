#include <iostream>
#include <vector>
using namespace std;

int a[100], n, ok;

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
	long long res = LLONG_MAX, w1, w2;
	cin >> n;
	long long f[n + 1];
	for(int i = 1; i <= n; i++)
		cin >> f[i];
	ok = 1;
	init();
	while(ok){
		w1 = 0, w2  =0;
		for(int i = 1; i <= n; i++){
			if(a[i] == 0)
				w1 += f[i];
			else
				w2 += f[i];
		}
		
		res = min(res, abs(w1 - w2));
		next();
	}
	cout << res;
}
/*
5
3 2 7 4 1
--
5
0 0 0 11 20
*/