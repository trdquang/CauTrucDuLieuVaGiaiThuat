#include <bits/stdc++.h>
#include <map>
using namespace std;

void next(int a[], int n, int k){
	map<int, int> mp;
	for(int i = 1; i <= k; i++)
		mp[a[i]]++;
	
	int i = k;
	while(i >= 1 && a[i] == n - k + i)
		i--;
	
	if(i == 0){
 
		cout << k << endl;
		return ;
	}else{
		a[i]++;
		for(int j = i + 1; j <= k; j++)
			a[j] = a[j - 1] + 1;
	}
	
	int cnt = 0;
	for(int i = 1; i <= k; i++){
		if(mp[a[i]] == 0)
			cnt ++;
	}
 
	cout << cnt << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int a[k + 1];
		for(int i = 1; i <= k; i++)
			cin >> a[i];
		
		next(a, n, k);
 
	}
}
/*
3
5 3
1 3 5
5 3
1 4 5
6 4
3 4 5 6
*/