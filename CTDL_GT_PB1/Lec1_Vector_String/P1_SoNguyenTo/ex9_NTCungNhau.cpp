#include <bits/stdc++.h>

using namespace std;

int tim_uoc(int a, int b){
	while(b != 0){
		int r = a%b;
		a = b;
		b = r;
	}
	return a;
}

int main(){
	int a, b;
	cin >> a >> b;
	for(int i = a; i <= b; i++){
		for(int j = i+1; j <= b; j++){
			if(tim_uoc(i, j) == 1){
				printf("(%d,%d)\n", i, j);
			}
		}
	}
}