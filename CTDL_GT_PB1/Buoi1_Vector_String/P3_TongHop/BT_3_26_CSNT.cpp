#include <bits/stdc++.h>
using namespace std;

void in(int t, int c){
	if(c != 0)
		cout << t << " " << c << endl;
}

void lay_so(long long n){
	int c2 = 0, c3 = 0, c5 = 0, c7 = 0;
	while(n){
		int r = n % 10;
		if(r == 2)
			c2++;
		else if(r == 3)
			c3++;
		else if(r == 5)
			c5++;
		else if(r == 7)
			c7++;
		n /= 10;
	}
	in(2, c2);
	in(3, c3);
	in(5, c5);
	in(7, c7);
}

int main(){
	long long n;
	cin >> n;
	lay_so(n);
}