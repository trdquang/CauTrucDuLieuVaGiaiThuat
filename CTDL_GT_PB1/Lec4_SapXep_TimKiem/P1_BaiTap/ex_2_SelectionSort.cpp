#include <bits/stdc++.h>
using namespace std;

void selection_sort(int a[], int n){
	for(int i = 0; i < n - 1; i++){
		int id = i;
		for(int j = i + 1; j < n; j++){
			if(a[j] < a[id])
				id = j;
		}
		if(i != id)
			swap(a[i], a[id]);
		cout << "Buoc " << (i + 1) << ": ";
		for(int k = 0; k < n; k++)
			cout << a[k] << " ";
		cout << endl;
	}
}

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++)
		cin >> a[i];
	selection_sort(a, n);
}
/*
4
5 7 3 2
*/