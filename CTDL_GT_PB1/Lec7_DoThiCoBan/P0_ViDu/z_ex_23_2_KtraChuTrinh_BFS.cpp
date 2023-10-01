#include <bits/stdc++.h>
using namespace std;

int n, m, x, y, cnt = 0;
bool used[1001];
vector<int> adj[1001];
int parent[1001];

bool bfs(int u){
	queue<int>q;
	q.push(u);
	used[u] = true;
	
	while(!q.empty()){
		int t = q.front();
		q.pop();
		for(int it: adj[t]){
			if(used[it]){
				if(it != parent[t])
					return true;
			}else{
				parent[it] = t;
				q.push(it);
				used[it] = true;
			}
		}
	}
	return false;
}

int main(){
	cin >> n >> m;
	while(m--){
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	
	int ok = 0;
	for(int i = 1; i <= n; i++){
		if(used[i] == false){
			ok = bfs(i);
			if(ok){
				cout <<"YES";
				return 0;
			}
		}
	}
	cout << "NO";
}

/*
6 9
1 2 1 3 2 3 2 5 3 4 3 5 4 5 4 6 5 6
*/