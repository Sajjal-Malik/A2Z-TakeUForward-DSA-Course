#include <bits/stdc++.h>
using namespace std;

int main() {
    // Declare a queue of integers
    queue<int> q;
    
    // Enqueue elements
    q.push(10);
    q.push(20);
    q.push(30);
    
    // Access front and back elements
    cout << "Front element: " << q.front() << endl; // 10
    cout << "Back element: " << q.back() << endl;   // 30
    
    // Dequeue an element
    q.pop(); // Removes 10
    
    cout << "Front after pop: " << q.front() << endl; // 20
    
    // Check size and empty status
    cout << "Queue size: " << q.size() << endl; // 2
    cout << "Is empty? " << (q.empty() ? "Yes" : "No") << endl; // No
    
    return 0;
}