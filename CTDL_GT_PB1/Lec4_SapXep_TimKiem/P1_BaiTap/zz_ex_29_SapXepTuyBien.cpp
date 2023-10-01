#include <bits/stdc++.h>
using namespace std;

int TMP;

bool cmp(int x, int y){
	return abs(x - TMP) < abs(y - TMP);
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n >> TMP;
		int a[n];
		for(int &x: a)
			cin >> x;
		
		stable_sort(a, a + n, cmp);
		for(int el: a)
			cout << el << " ";
		cout << endl; 
	}
}