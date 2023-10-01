#include <bits/stdc++.h>
using namespace std;

long long tim(int n, int k){
	int x = k/(n - 1);
	int r =  k%(n - 1);
	if(r == 0)
		return (long long)x * n - 1;
	else
		return (long long)x * n + r;
}

int main(){
	int t;
	cin >> t;
	long long x, y;
	while(t--){
		cin >> x >> y;
		cout << tim(x, y) << endl;
	}
}