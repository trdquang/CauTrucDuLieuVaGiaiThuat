#include <bits/stdc++.h>
using namespace std;

int a[100], ok, n, k;

void init(){
	for(int i = 1; i <= k; i++){
		a[i] = i;
	}
}

void next(){
	int i = k;
	while (i >= 1 && a[i] == n - k + i){
		i--;
	}
	if(i == 0)
		ok = 0;
	else{
		a[i]++;
		for(int j = i + 1; j <= k; j++)
			a[j] = a[j-1] + 1;
	}
}

int main(){
	ok = 1;
	cin >> n >> k;
	init();
	while(ok){
		for(int i = 1; i <= k; i++)
			cout << a[i] << " ";
		
		cout << endl;
		next();
	}
}