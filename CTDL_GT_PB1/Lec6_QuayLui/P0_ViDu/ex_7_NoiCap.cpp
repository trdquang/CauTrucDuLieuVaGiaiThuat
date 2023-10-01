#include <iostream>
#include <queue>

using namespace std;

int main(){
	int n;
	cin >> n;
	int x, a, b, tmp;
	priority_queue<int, vector<int>, greater<int>>pq;
	for(int i = 0; i < n; i++){
		cin >> x;
		pq.push(x);
	}
	
	while(pq.size() != 1){
		a = pq.top();
		pq.pop();
		b = pq.top();
		pq.pop();
		tmp = a + b;
		pq.push(tmp);
//		cout << tmp << endl;
	}
	cout << pq.top();
}
/*
5
6 3 8 2 4
*/