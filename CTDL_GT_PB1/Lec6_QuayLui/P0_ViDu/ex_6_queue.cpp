#include <iostream>
#include <queue>

using namespace std;
int main(){
//	priority_queue<int>pq;
	priority_queue<int, vector<int>, greater<int>>pq;
	pq.push(100);
	pq.push(200);
	pq.push(50);
	pq.push(300);
	
	cout << pq.top() << endl;
	pq.pop();
	cout << pq.top() << endl;
}