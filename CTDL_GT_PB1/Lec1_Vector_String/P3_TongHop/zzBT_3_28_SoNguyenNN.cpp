#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
	if(b == 0)
		return a;
	return gcd(b, a%b);
}

int bcn(int a, int b){
	return a/gcd(a, b) * b;
}

int main(){
	 
	int x, y, z, n;
	cin >> x >> y >> z >> n;
	int b1 = bcn(x, bcn(y, z));
	long long cd = pow(10, n-1);
	long long ct = pow(10, n);
	
	long long res = (cd + b1 - 1)/b1*b1;
	if(res < ct)
		cout << res;
	else
		cout << -1;
		
	
}