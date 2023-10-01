#include <bits/stdc++.h>
using namespace std;

void tim_thieu(int a[], int n){
	vector<int>f(1000001, 0);
	int min_value = INT_MAX, max_value = INT_MIN;
	for(int i = 0; i < n; i++){
		f[a[i]]++;
		min_value = min(min_value, a[i]);
		max_value = max(max_value, a[i]);
	}
	
	int check = 0;
	for(int i = min_value; i <= max_value; i++){
		if(f[i] == 0){
			check++;
		}
	}
	cout << check << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin >> a[i];
		
		tim_thieu(a, n);
	}
}
/*
2 5
4 5 3 8 6
3
2 1 3
*/