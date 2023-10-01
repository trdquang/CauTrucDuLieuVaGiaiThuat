#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, k;
	cin >> n >> k;
	int a[n];
	for(int i = 0; i < n; i++)
		cin >> a[i];
		
	int f = *lower_bound(a, a + n, k), l = *upper_bound(a, a + n, k);
	cout << "first: " << f << endl;	
	cout << "last: " << l << endl;	
	cout <<"so lan: " <<(l - f) << endl;
}
/*
8 2
1 2 2 2 5 7 8 11
*/