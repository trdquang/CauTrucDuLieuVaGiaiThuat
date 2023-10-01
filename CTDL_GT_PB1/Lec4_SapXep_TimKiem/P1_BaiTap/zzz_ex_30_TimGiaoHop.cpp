#include <bits/stdc++.h>
#include <vector>
using namespace std;

void tim_giao_hop(int a[], int b[], int n, int m){
	vector<int>giao, hop;
	int i = 0, j = 0;
	while(i < n && j < m){
		if(a[i] == b[j]){
			giao.push_back(a[i]);
			hop.push_back(a[i]);
			i ++;	j++;
		}else if(a[i] < b[j]){
			giao.push_back(a[i]);
			i++;
		}else if(b[j] < a[i]){
			giao.push_back(b[j]);
			j++;
		}
	}
	while(i < n){
		giao.push_back(a[i]);
		i++;
	}
	while(j < m){
		giao.push_back(b[j]);
		j++;
	}
	
	for(int el: giao)
		cout << el << " ";
	cout << endl;
	for(int el: hop)
		cout << el << " ";
	cout << endl;
}

int main(){
	int n, m;
	cin >> n >> m;
	int a[n], b[m];
	for(int i = 0; i < n; i++)
		cin >> a[i];
	for(int j = 0; j < m; j++)
		cin >> b[j];
	tim_giao_hop(a, b, n, m);
}
/*
3 5
1 2 3
1 2 3 5 9
*/