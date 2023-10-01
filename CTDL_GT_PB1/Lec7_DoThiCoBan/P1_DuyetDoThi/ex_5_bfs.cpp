#include <bits/stdc++.h>
using namespace std;

bool used[1001];
vector<int>v[1001];
int n, m, k, x, y;

void bfs(int u){
	queue<int>q;
	q.push(u);
	used[u] = true;
	while(!q.empty()){
		int t = q.front();
		cout << t << " ";
		q.pop();
		for(int it: v[t])
			if(used[it] == false){
				q.push(it);
				used[it] = true;
			}
	}
}

int main(){
	cin >> n >> m >> k;
	while(m--){
		cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	memset(used, false, sizeof(used));
	bfs(k);
}

/*
6 9 1
1 2
1 3
2 3
2 5
3 4
3 5
4 5
4 6
5 6
*/