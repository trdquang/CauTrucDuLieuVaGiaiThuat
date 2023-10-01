#include <bits/stdc++.h>
using namespace std;

int a[100], n, ok;

void init(){
	for(int i = 1; i <= n; i++)
		a[i] = i;
}

void next(){
	int i = n - 1;
	while(i >= 1 && a[i] > a[i + 1]){
		i--;
	}
	if(i == 0)
		ok = 0;
	else{
		next_permutation(a + 1, a + n + 1);
	}
}

int main(){
	cin >> n;
	ok = 1;
	init();
	while(ok){
		for(int i = 1; i <= n; i++)
			cout << a[i] << " ";
		cout << endl;
		next();
	}
}