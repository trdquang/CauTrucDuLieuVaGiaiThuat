#include <bits/stdc++.h>
using namespace std;

void buble_sort(int a[], int n){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n - 1; j ++){
			if(a[j] > a[j + 1])
				swap(a[j], a[j + 1]);
		}
		cout <<"Buoc " <<(i + 1) <<": ";
		for(int k = 0; k < n; k++)
			cout << a[k] <<" ";
		cout << endl;
	}
}

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++)
		cin >> a[i];
	buble_sort(a, n);
}