#include <bits/stdc++.h>
using namespace std;

bool used[1001];
vector<int>adj[1001];
int n, m, x, y, cnt;

void bfs(int u){
	queue<int>q;
	q.push(u);
	used[u] = true;
	
	while(!q.empty()){
		int t = q.front();
		q.pop();
		for(int it: adj[t]){
			if(used[it] == false){
				cnt++;
				q.push(it);
				used[it] = true;
			}
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		memset(used, false, sizeof(used));
		cnt = 1;
		cin >> n >> m;
		while(m--){
			cin >> x >> y;
			adj[x].push_back(y);
			adj[y].push_back(x);
		}

		int res = 0;
		for(int i = 1; i <= n; i++){
			if(used[i] == false){
				cnt = 1;
				bfs(i);
				res = max(res, cnt);
			}
		}
		
		cout << res << endl;
		
	}
}
/*
2
3 2
1 2
2 3
10 12
1 2
3 1
3 4
5 4
3 5
4 6
5 2
2 1
7 1
1 2
9 10
8 9
*/