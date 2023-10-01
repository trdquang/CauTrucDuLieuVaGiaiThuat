#include <bits/stdc++.h>
using namespace std;

int a[100], n, ok;

void init(){
	for(int i = 0; i < n; i++){
		a[i] = n - i;
	}
}

int main(){
	cin >> n;
	init();
	do{
		for(int i = 0; i < n; i++)
			cout << a[i] << " ";
		cout << endl;
	}while(prev_permutation(a, a + n));
}