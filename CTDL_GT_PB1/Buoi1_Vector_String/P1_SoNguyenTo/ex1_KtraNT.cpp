#include <bits/stdc++.h>
using namespace std;

int ktra_nt(int n){
	if(n < 2)
		return 0;
	for(int i = 2; i <= sqrt(n); i++)
		if(n % i == 0)
			return 0;
	
	return 1;
}

int main(){
	int n;
	cin >> n;
	if(ktra_nt(n))
		cout <<"YES";
	else
		cout << "NO";
}