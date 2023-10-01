#include <bits/stdc++.h>
using namespace std;

int doan_con(int a[], int n, int s){
	int res = -1;
	for(int i = 0; i < n; i++){
		int sum = 0;
		for(int j = i; j < n; j++){
			sum += a[j];
			if(sum <= s)
				res = max(res, j - i + 1);
		}
	}
	
	return res;
}

int main(){
	int n, s;
	cin >> n >> s;
	int a[n];
	for(int i = 0; i < n; i++)
		cin >> a[i];
	cout << doan_con(a, n, s);
}

/*
7 20
2 6 4 3 6 8 9
*/