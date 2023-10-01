//do thi vo huong

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int v, e;
		cin >> v >> e;
		vector<int>vt[v + 1];
		while(e--){
			int x, y;
			cin >> x >> y;
			vt[x].push_back(y);
		}
		
		for(int i = 1; i <= v; i++){
			cout << i << ": ";
			for(auto it: vt[i])
				cout << it << " ";
			cout << endl;
		}
	}	
}
/*
1
6 9
1 2
2 5
3 1
3 2
3 5
4 3
5 4
5 6
6 4
*/