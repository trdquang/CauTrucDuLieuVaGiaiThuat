#include <bits/stdc++.h>
using namespace std;

void qsort(int a[], int l, int r){
	int i = l, j = r, pv = a[r];
	while(i <= j){
		while(a[i] < pv)
			i++;
		while(a[j] > pv)
			j--;
		if(i <= j){
			swap(a[i], a[j]);
			if(i != j)
				cout << a[i] <<" "<<a[j] << endl;
			i++;
			j--;
		}
	}
	if(i < r)
		qsort(a, i, r);
	if(l < j)
		qsort(a, l, j);
}

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++)
		cin >> a[i];
	qsort(a, 0, n - 1);
//	for(int i = 0; i < n; i++)
//		cout << a[i] << " ";
}
/*
5
5 4 3 2 1
*/