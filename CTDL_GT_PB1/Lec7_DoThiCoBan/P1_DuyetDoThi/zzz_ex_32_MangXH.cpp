#include <bits/stdc++.h>
#include <vector>
using namespace std;

int n, m, x, y;
vector<int>adj[1001];

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> m;
		while(m--){
			cin >> x >> y;
			adj[x].push_back(y);
			adj[y].push_back(x);
		}
	
		int ok = 1;
		for(int i = 1; i <= n; i++){
			if(ok == 0)
				break;
			if(adj[i].size() != 0){
				int tmp = adj[i].size();
				for(int it: adj[i]){
					if(adj[it].size() != tmp){
						ok = 0;
						break;
					}
				}
			}
		}
		if(ok)
			cout <<"YES\n";
		else
			cout <<"NO\n";
		for(int i = 1; i <= n; i++)
			adj[i].clear();
	}
}
/*
3
4 3
1 3
3 4
1 4
4 4
3 1
2 3
3 4
1 2
10 4
4 3
5 10
8 9
1 2
*/