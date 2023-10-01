#include <bits/stdc++.h>
using namespace std;

char c[100];
int ok, n;

bool check(){
	if(c[1] != 'H')
		return false;
	if(c[n] != 'A')
		return false;
	for(int i = 1; i < n; i++){
		if(c[i] == 'H' && c[i + 1] == 'H')
			return false;
	}
	return true;
}

void init(){
	for(int i = 1; i <= n; i++)
		c[i] = 'A';
}

void next(){
	int i = n;
	while(i >= 1 && c[i] == 'H')
		c[i--] = 'A';
	if(i == 0)
		ok = 0;
	else
		c[i] = 'H';
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		ok = 1;
		init();
		while(ok){
			if(check()){
				for(int i = 1; i <= n; i++)
					cout << c[i];
				cout << endl;
			}
			next();
		}
	}
}