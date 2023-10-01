#include <bits/stdc++.h>
using namespace std;

vector<int>v[1001];
bool used[1001];
int n, m;

void bfs(int u){
	queue<int>q;
	q.push(u);
	used[u] = true;
	while(!q.empty()){
		int t = q.front();
		q.pop();
		for(int it: v[t]){
			if(used[it] == false){
				q.push(it);
				used[it] = true;
			}
		}
	}
}

int main(){
	cin >> n;
	int a[n + 1][n + 1];
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++)
			cin >> a[i][j];
	}
	
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			if(a[i][j] == 1 && i != j){
				v[i].push_back(j);
			}
		}
	}
	
	memset(used, false, sizeof(used));
	
	int cnt = 0;
	for(int i = 1; i <= n; i++){
		if(used[i] == false){
			bfs(i);
			++cnt;
		}
	}
	cout << cnt;
}
/*
5
1 0 0 1 1 
0 1 1 0 0
0 1 1 0 0
1 0 0 1 1
1 0 0 1 1
*/