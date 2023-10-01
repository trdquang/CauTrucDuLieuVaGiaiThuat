#include <bits/stdc++.h>
using namespace std;

//neu 2 mang da duoc sap xep
//vector<int> hop_mang(int a[], int b[], int n, int m){
//	vector<int>v;
//	int i = 0, j = 0;
//	while(i < n && j < m){
//		if(a[i] < b[j]){
//			v.push_back(a[i]);
//			i++;
//		}else{
//			v.push_back(b[j]);
//			j++;
//		}
//	}
//	while(i < n){
//		v.push_back(a[i]);
//		i++;
//	}
//	while(j < m){
//		v.push_back(b[j]);
//		j++;
//	}
//	return v;
//}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		int a[n + m];
		for(int &x:a)
			cin >> x;
		sort(a, a + n + m);
		for(int x: a)
			cout << x << " ";
	}
}
/*
1
3 4
1 2 3
1 5 6 2
*/