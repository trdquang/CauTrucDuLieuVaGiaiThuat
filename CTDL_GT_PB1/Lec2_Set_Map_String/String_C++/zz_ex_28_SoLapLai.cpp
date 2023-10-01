#include <bits/stdc++.h>
using namespace std;

long long ucl(long long a, long long b){
	if(b == 0)
		return a;
	return ucl(b, a % b);
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n, x, y;
		cin >> n >> x >> y;
		for(int i = 1; i <= ucl(x, y); i++)
			cout << n ;
		cout << endl;
	}
}