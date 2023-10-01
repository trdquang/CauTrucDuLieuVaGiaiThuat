#include <iostream>

using namespace std;

int a[100], n, k, s, cnt;

void back_track(int i){
	for(int j = a[i - 1] + 1; j <= n - k + i; j++){
		a[i] = j;
		if(i == k){
			int sum = 0;
			for(int i = 1; i <= k; i++){
				sum += a[i];
			}
			if(sum == s){
				cnt ++;
//				for(int i = 1; i <= k; i++){
//					cout << a[i] << " ";
//				}
//				cout << endl;
			}
		}else
			back_track(i + 1);
	}

}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k >> s;
		a[0] = 0;
		cnt = 0;
		back_track(1);
		cout << cnt << endl;
	}
}
/*
10
9 3 23
9 3 22
10 3 28
16 10 107
20 8 102
20 10 105
20 10 155
3 4 3
4 2 11
0 0 0
*/