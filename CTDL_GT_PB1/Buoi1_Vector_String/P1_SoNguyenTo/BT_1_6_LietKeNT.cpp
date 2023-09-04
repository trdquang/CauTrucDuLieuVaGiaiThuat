#include <bits/stdc++.h>
using namespace std;

vector <int> sang_nt(){
	vector <int> v(1000001, 1);
	v[0] = 0;
	v[1] = 0;
	for(int i = 2; i <= sqrt(1000000); i++){
		if(v[i] == 1){
			for(int j = i*i; j <= 1000000; j+=i)
				v[j] = 0;
		}
	}
	return v;
}

int main(){
	vector<int> v = sang_nt();
	int n;
	cin >> n;
	int cnt = 0;
	for(int i = 2; i <= 1000000; i++){
		if(cnt == n)
			break;
		if(v[i] == 1){
			cnt++;
			cout << i << endl;
		}
	}
}