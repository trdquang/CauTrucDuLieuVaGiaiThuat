#include <bits/stdc++.h>
using namespace std;

void qsort(int a[], int l, int r){
	int i = l, j = r, m = (l + r)/2;
	int pivot = a[m];
	while(i <= j){
		while(a[i] < pivot)
			i++;
		while(a[j] > pivot)
			j--;
		if(i <= j){
			swap(a[i], a[j]);
			i++;
			j--;
		}
	}
	if(i < r)
		qsort(a, i, r);
	if(j > l)
		qsort(a, l, j);
}

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++)
		cin >> a[i];
	qsort(a, 0, n - 1);
	for(int i = 0; i < n; i++)
		cout << a[i] << " ";
}
/*
8
1 7 2 3 5 6 8 0
*/