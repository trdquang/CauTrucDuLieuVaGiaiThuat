#include <bits/stdc++.h>
using namespace std;

int ktra_so(int n){
	int tmp = n, res = 0;
	while(n){
		if(n % 10 == 9)
			return 0;
		res = res * 10 + n % 10;
		n /= 10;
	}
	return (tmp == res);
}

int main(){
	int n;
	cin >> n;
	int cnt = 0;
	for(int i = 2; i < n; i++)
		if(ktra_so(i)){
			cout << i << " ";
			cnt ++;
		}
	if(cnt == 0)
		cout << 0;
	else
		cout <<"\n"<<cnt;
}