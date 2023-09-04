#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	long long l, r;
	while(t--){
		cin >> l >> r;
		if(l - r > 1)
			cout << "YES\n";
		else
			cout <<"NO\n";
	}
}