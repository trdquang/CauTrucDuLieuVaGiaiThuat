#include <bits/stdc++.h>
using namespace std;

vector<int> sang_ole(){
	vector<int>v(1000001);
	for(int i = 1; i <= 1000000; i++)
		v[i] = i;
	
	//do so nguyen to co phi ham ole = chinh no - 1
	for(int i = 2; i <= 1000000; i++){
		if(v[i] == i){
			v[i] -=1;
			//duyet cac boi cua i
			for(int j = i * 2; j <= 1000000; j+=i)
				v[j] = v[j] - v[j]/i;
		}
	}
	
	return v;
}

int main(){
	vector <int> v = sang_ole();
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		for(int i = 1; i <= n; i++)
			cout << v[i] << " ";
		cout << endl;
	}
}