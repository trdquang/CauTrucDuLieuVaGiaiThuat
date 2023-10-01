#include <bits/stdc++.h>
#include <queue>
using namespace std;

bool used[1001];
vector<int>adj[1001];
int n, m;	//dinh, canh

void bfs(int u){
	//buoc 1: khoi tao 
	queue<int> q;
	q.push(u);
	used[u] = true;	//danh dau u da duoc lay
	while(!q.empty()){
		//lay dinh 
		int s = q.front();
		q.pop();
		cout << s << " ";
		//duyet dinh ke
		for(int x: adj[s]){
			if(used[x] == false){
				q.push(x);
				used[x] = true;
			}
		}
	}
}

int main(){
	cin >> n >> m;
	// n- so dinh
	//m - so canh
	for(int i = 1; i <= m; i++){
		int x, y;
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	memset(used, false, sizeof(used));
	bfs(1);
}
/*
10 9
1 2
1 5
1 8
2 3
2 4
5 6
5 7
8 9 
8 10
*/