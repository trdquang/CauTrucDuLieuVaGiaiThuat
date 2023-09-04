#include <bits/stdc++.h>
using namespace std;

int tim_uoc(int a, int b){
	if(b == 0)
		return a;
	return tim_uoc(b, a%b);
}

int main(){
	int a, b;
	cin >> a >> b;
	if(tim_uoc(a, b) == 1)
		cout <<"YES";
	else
		cout << "NO";
}