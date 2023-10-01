#include <iostream>
using namespace std;

int used[100], n, a[100];

void back_track(int i){
	for(int j = 1; j <= n; j++){
		if(used[j] == 1){
			a[i] = j;
			used[j] = 0;
			if(i == n){
				for(int i = 1; i <= n; i++)
					cout << a[i];
				cout << endl;
			}else
				back_track(i + 1);
			used[j] = 1;
		}
	}
}

int main(){
	cin >> n;
	for(int i = 1; i <= n; i++)
		used[i] = 1;
	back_track(1);
}