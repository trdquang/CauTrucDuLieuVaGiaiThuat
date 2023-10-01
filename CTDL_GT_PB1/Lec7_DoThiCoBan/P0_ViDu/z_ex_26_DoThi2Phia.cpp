#include <bits/stdc++.h>
using namespace std;

int n, m, x, y, cnt = 0;
bool used[1001];
vector<int> adj[1001];
int color[1001] = {0};
int degree[1001] = {0};

bool bfs(int u){
	queue<int>q;
	q.push(u);
	color[u] = 1;
	while(!q.empty()){
		int v = q.front();
		q.pop();
		for(int x: adj[v]){
			if(color[x] == color[v])
				return false;
			else if(color[x] == 0){
				q.push(x);
				color[x] = 3 - color[v];
			}
		}
	}
	return true;
}

int main(){
	cin >> n >> m;
	while(m--){
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	cout << bfs(1);
	
	cout << endl;
	for(int i = 1; i <= n; i++){
		cout << i << " " << color[i] << endl;
	}
}
/*
5 4
1 2 
2 3
3 4
3 5

5 5
1 2 
2 3
3 4
3 5
3 1
*/