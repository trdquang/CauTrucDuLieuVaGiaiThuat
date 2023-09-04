#include <bits/stdc++.h>
using namespace std;

int tinh_gt(int n){
	if(n == 0)
		return 1;
	return n * tinh_gt(n - 1);
}

int main(){
	int n;
	cin >> n;
	cout << tinh_gt(n);
}