#include <bits/stdc++.h>
using namespace std;

void selection_sort(int a[], int n){
	int cnt = 0;
	for(int i = 0; i < n - 1; i++){
		int id = i;
		for(int j = i + 1; j < n; j++){
			if(a[j] < a[id])
				id = j;
		}
		if(id != i){
			cnt ++;
			swap(a[i], a[id]);
		}
	}
	cout << cnt << endl;
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
		selection_sort(a, n);
	}
}