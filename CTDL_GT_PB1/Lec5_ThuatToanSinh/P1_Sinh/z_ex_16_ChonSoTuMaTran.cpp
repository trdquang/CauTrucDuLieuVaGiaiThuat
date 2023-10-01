#include <bits/stdc++.h>
#include <set>
using namespace std;

int main(){
	int n, s;
	cin >> n >> s;
	int a[n][n];
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			cin >> a[i][j];
	
	int res[n][n];
	int cnt = 0;
	int init[n];
	for(int i = 0; i < n; i++)
		init[i] = i;
	
	do{
		int sum = 0;
		set<int>st;
		for(int i = 0; i < n; i++){
			st.insert(init[i]);
			sum += a[i][init[i]];
		}
		if(st.size() == n && sum == s){
			for(int i = 0; i < n; i++){
				res[cnt][i] = init[i];
			}
			cnt ++;
		}
			
	}while(next_permutation(init, init + n));
	cout << cnt << endl;
	for(int i = 0; i < cnt; i++){
		for(int j = 0; j < n; j++){
			cout << res [i][j] + 1<< " ";
		}
		cout << endl;
	}
}
/*
3 10
2 4 3
1 3 6
4 2 4
*/