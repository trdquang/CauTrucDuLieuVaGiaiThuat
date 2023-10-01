#include <bits/stdc++.h>
using namespace std;

void insert_sort(int a[], int n){
	
	for(int i = 1; i < n; i++){
		//tim vi tri phu hop cho a[i]
		int j = i;
		int tmp = a[i];
		while(j > 0 && a[i] < a[j - 1]){
			j--;
		}
		for(int k = i; k > j; k--)
			a[k] = a[k - 1];
		cout << tmp <<" " << j << endl;
		a[j] = tmp;
	}
}

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++)
		cin >> a[i];
	
	insert_sort(a, n);

}
/*
6
8 5 2 7 9 3
*/