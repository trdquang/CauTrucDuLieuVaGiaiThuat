#include <bits/stdc++.h>
using namespace std;

long long tim_du(string s, long long x){
	long long res = 0;
	for(int i = 0; i < s.size(); i++){
		res = (res * 10 + (s[i] - '0'))%x;
		res %= x;
	}
	return res;
}

long long tim_uoc(long long a, long long b){
	if(b == 0)
		return a;
	return tim_uoc(b, a%b);
}

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		long long x;
		getline(cin, s);
		cin >> x;
		cin.ignore();
		cout << tim_uoc(x, tim_du(s, x)) << endl;
	}
}
/*
2
10120391293189239192318294124871248124172471247179241297417982
1000000007
12030123012949129491240120410240124912949124912041024010010230135
5
*/