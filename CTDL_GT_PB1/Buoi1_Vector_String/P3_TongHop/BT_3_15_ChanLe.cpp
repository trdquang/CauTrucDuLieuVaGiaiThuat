#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	int c = 0, l = 0;
	while(n){
		if( (n % 10)%2 == 0)
			c++;
		else
			l++;
		n /= 10;
	}

	cout << c << " " << l;
}