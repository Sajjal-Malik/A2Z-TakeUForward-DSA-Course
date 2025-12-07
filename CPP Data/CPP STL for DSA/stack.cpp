#include <bits/stdc++.h>
using namespace std;

int main() {
    // Create a stack of integers
    stack<int> s;
    
    // Push elements onto the stack
    s.push(10);
    s.push(20);
    s.push(30);
    
    // Check if stack is empty
    if (!s.empty()) {
        cout << "Stack is not empty" << endl;
    }
    
    // Get the top element
    cout << "Top element: " << s.top() << endl; // 30
    
    // Pop the top element
    s.pop();
    cout << "Top element after pop: " << s.top() << endl; // 20
    
    // Get the size of the stack
    cout << "Stack size: " << s.size() << endl; // 2
    

    
    return 0;
}