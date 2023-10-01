#include <bits/stdc++.h>
using namespace std;

int n, s;
int a[100], x[100], used[100];

void back_track(int i, int k, int sum){
	if(sum == s){
		for(int j = 1; j < k; j ++)
			cout << x[j] << " ";
		cout << endl;
	}
	
	for(int j = i; j <= n; j++){
		if(used[j] == 0 && sum + a[j] <= s){
			used[j] = 1;
			x[k] = a[j];
			back_track(j, k + 1, sum + a[j]);
			used[j] = 0;
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> s;
		for(int i = 1; i <= n; i++)
			cin >> a[i];
		sort(a, a + n + 1);
		for(int i = 0; i <= n; i++)
			used[i] = 0;
		back_track(1, 1, 0);
	}
}