/*
Duyet dfs tu dinh 1
*/
#include <bits/stdc++.h>

using namespace std;

int a[1001][1001];
int n;

void dfs(int u){
	cout << u <<" ";
	for(int i = 1; i <= n; i++){
	//duyet cac cot xem co canh noi voi i  khong
		if(a[u][i] == 1){
		//Dat gia trij = 0 cho cac cap noi da xet
			a[u][i] = a[i][u] = 0;
			dfs(i);
		}
	}
}

int main(){
	cin >> n;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++)
			cin >> a[i][j];
	}
	
	dfs(1);
}
/*
10
0 1 0 0 1 0 0 1 0 0
1 0 1 1 0 0 0 0 0 0
0 1 0 0 0 0 0 0 0 0
0 1 0 0 0 0 0 0 0 0
1 0 0 0 0 1 1 0 0 0
0 0 0 0 1 0 0 0 0 0
0 0 0 0 1 0 0 0 0 0
1 0 0 0 0 0 0 0 1 1
0 0 0 0 0 0 0 1 0 0
0 0 0 0 0 0 0 1 0 0
*/