#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, m;
	cin >> n >> m;
	int a[n], b[m];
	for(int i = 0; i < n; i++)
		cin >> a[i];
	
	for(int i = 0; i < m; i++)
		cin >> b[i];
	
	int cnt = 0;
	int i = 0, j = 0;
	while(i < n && j < m){
		if(a[i] > b[j]){
			cnt ++;
			i++;
			j++;
		}else if(a[i] <= b[j]) 
			i++;
	}
	
	cout << cnt;
}