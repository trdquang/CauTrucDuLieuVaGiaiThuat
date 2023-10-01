#include <bits/stdc++.h>
using namespace std;

void sap_day_con(int a[], int n){
	int l = 0, r = n - 1;
	for(int i = 0; i < n - 1; i++){
		if(a[i + 1] < a[i]){
			l = i;
			break;
		}
	}
	
	for(int i = n - 1; i > 0; i--){
		if(a[i - 1] > a[i]){
			r = i;
			break;
		}
	}
	
	int min_value = *min_element(a + l, a + r + 1);
	int max_value = *max_element(a + l, a + r + 1);
	for(int i = 0; i <= l; i++){
		if(a[i] > min_value){
			l = i;
			break;
		}
	}
	
	for(int i = n - 1; i >= r; i--){
		if(a[i] < max_value){
			r = i;
			break;
		}
	}
	
	cout << l + 1 << " " << r + 1 << endl;;
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
		sap_day_con(a, n);
	}
}