#include <bits/stdc++.h>
using namespace std;

int a[100], n, ok;

void init(){
	for(int i = 0; i < n; i++)
		a[i] = i + 1;
}


int main(){
	cin >> n;
	ok = 1;
	init();
	do{
		for(int i = 0; i < n; i++)
			cout << a[i] << " ";
		cout << endl;
	}while(next_permutation(a, a + n));
}