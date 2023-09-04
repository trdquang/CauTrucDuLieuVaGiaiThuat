#include <bits/stdc++.h>
using namespace std;

int tim_so(int a, int b){
	int res = 1;
	while(b){
		if(b % 2 == 1){
			res *= a;
			res %= 10;
		}
		b /= 2;
		a *= a;
		a %= 10;
	}
	return res;
}

int main(){
	int a, b;
	cin >> a >> b;
	cout << tim_so(a, b);
}