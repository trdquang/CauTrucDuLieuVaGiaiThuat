#include <bits/stdc++.h>
using namespace std;

int dem_cs(int n){
	int cnt = 0;
	while(n){
		cnt ++;
		n /= 10;
	}
	return cnt;
}

int ktra_amstrong(int n){
	int tmp = n, res = 0, x = dem_cs(n);
	while(n){
		res += pow(n%10, x);
		n /= 10;
	}
	return (tmp == res);
}

int main(){
	int n;
	cin >> n;
	cout << ktra_amstrong(n);
}