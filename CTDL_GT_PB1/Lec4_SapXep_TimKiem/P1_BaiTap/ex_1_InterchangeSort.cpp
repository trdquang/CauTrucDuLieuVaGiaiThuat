#include <bits/stdc++.h>
using namespace std;

void in(int a[], int n){
	for(int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
}

void interchange_sort(int a[], int n){
	for(int i = 0; i < n - 1; i++){
		for(int j = i + 1; j < n; j++){
			if(a[i] > a[j]){
				swap(a[i], a[j]);
			}
		}
		cout << "Buoc " << (i + 1) <<": ";
		in(a, n);
	}
}

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int &el: a)
		cin >> el;
	
	interchange_sort(a, n);
}