#include <bits/stdc++.h>
using namespace std;

bool used[1001];
vector<int>v[1001];
int truoc[1001], n, m, s, e, cnt;;

void bfs(int u){
	cnt++;
	queue<int>q;
	q.push(u);
	used[u] = true;
	while(!q.empty()){
		int t = q.front();
		q.pop();
		for(int it: v[t]){
			if(used[it] == false){
				cnt++;
				truoc[it] = t;
				q.push(it);
				used[it] = true;
			}
		}
	}
}

int main(){
	cin >> n >> m ;
	int x, y;
	while(m--){
		cin >> x >> y;
		v[x].push_back(y);
		//v[y].push_back(x);
	}
	
 
	for(int i = 1; i <= n; i++){
		cnt = 0;
		memset(used, false, sizeof(used));
		bfs(i);
		cout << cnt << endl;
	}
	 
}
/*
6 9
1 2 2 4 3 1 3 2 3 5 4 3 5 4 5 6 6 3
*/