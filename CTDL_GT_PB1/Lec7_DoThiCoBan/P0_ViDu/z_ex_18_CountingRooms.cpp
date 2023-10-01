#include <bits/stdc++.h>
using namespace std;

char a[1001][1001];
int dx[4] = {0, -1, 0, 1};
int dy[4] = {-1, 0, 1, 0};
char cnt = '1';
int n, m;

void dfs(int i, int j){
	a[i][j] = cnt;
	for(int k = 0; k < 4; k++){
		int i1 = i + dx[k];
		int j1 = j + dy[k];
		if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m && a[i1][j1] == '.'){
			dfs(i1, j1);
		}
	}
}

int main(){
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++)
			cin >> a[i][j];
	}
	
	int dem = 0;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			if(a[i][j] == '.'){
				dfs(i, j);
				dem ++;
			}
		}
	}
	cout << dem;
//	for(int i = 1; i <= n; i++){
//		for(int j = 1; j <= m; j++)
//			cout << a[i][j] <<" ";
//		cout << endl;
//	}
}