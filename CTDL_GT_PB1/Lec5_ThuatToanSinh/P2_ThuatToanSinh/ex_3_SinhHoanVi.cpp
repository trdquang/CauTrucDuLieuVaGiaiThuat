#include <bits/stdc++.h>
using namespace std;

void next(int a[], int n){
	int i = n - 1;
	while(i >= 1 && a[i] > a[i + 1])
		i--;
	
	if(i == 0)
		for(int i = 1; i <= n; i++)
			a[i] = i;
	else{
		int j = n;
		while(a[i] > a[j])
			j--;
		swap(a[i], a[j]);
		reverse(a + i + 1, a + n + 1);
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n + 1];
		for(int i = 1; i <= n; i++)
			cin >> a[i];
		next(a, n);
		for(int i = 1; i <= n; i++)
			cout << a[i] << " ";
		cout << endl;
	}
}

/*
2
5
1 2 3 4 5
5
5 4 3 2 1
*/