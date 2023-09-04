#include <bits/stdc++.h>
using namespace std;

int tim(int a, int b){
	if(a % b == 0)
		return 0;
	return (b - a%b);
}

int main(){
	int t;
	cin >> t;
	int a, b;
	while(t--){
		cin >> a >> b;
		cout << tim(a, b) << endl;
	}
}