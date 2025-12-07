#include<bits/stdc++.h>
using namespace std;

int main() {
    // Max heap (default) - largest element at top
    priority_queue<int> max_pq;
    
    // Min heap - smallest element at top
    priority_queue<int, vector<int>, greater<int>> min_pq;
    
    // Inserting elements
    max_pq.push(30);
    max_pq.push(10);
    max_pq.push(50);
    max_pq.push(20);
    
    min_pq.push(30);
    min_pq.push(10);
    min_pq.push(50);
    min_pq.push(20);
    
    // Displaying elements
    cout << "Max Priority Queue: ";
    while (!max_pq.empty()) {
        cout << max_pq.top() << " ";
        max_pq.pop();
    }
    cout << endl;
    
    cout << "Min Priority Queue: ";
    while (!min_pq.empty()) {
        cout << min_pq.top() << " ";
        min_pq.pop();
    }
    cout << endl;
    
    return 0;
}