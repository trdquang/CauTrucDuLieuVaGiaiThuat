#include <bits/stdc++.h>
using namespace std;

int n, m, a[501][501];
int dx[8] = {0, -1, -1, -1, 0, 1, 1, 1};
int dy[8] = {-1, -1, 0, 1, 1, 0, 1, -1};

void bfs(int i, int j){
	queue<pair<int, int>>q;
	q.push({i, j});
	a[i][j] = -1;
	
	while(!q.empty()){
		pair<int, int> t = q.front();
		q.pop();
		for(int k = 0; k < 8; k++){
			int i1 = t.first + dx[k];
			int j1 = t.second + dy[k];
			if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m && a[i1][j1] == 1){
				q.push({i1, j1});
				a[i1][j1] = -1;
			}
		}
	}
}

void dem(){
	int res = 0;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			if(a[i][j] == 1){
				bfs(i, j);
				res ++;
			}
		}
	}
	cout << endl;
	cout <<"So dao = " << res << endl;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> m;
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= m; j++)
				cin >> a[i][j];
		}
		dem();
	}
}

/*
1
5 5
1 1 0 0 0
0 1 0 0 1
1 0 0 1 1
0 0 0 0 0
1 0 1 0 1
//
1
5 5
1 1 1 1 1
1 1 1 1 1
1 1 1 1 1
1 1 1 1 1
1 1 1 1 1
*/