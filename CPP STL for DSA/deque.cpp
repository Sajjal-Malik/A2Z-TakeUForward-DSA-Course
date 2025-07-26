#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Creating a deque
    deque<int> dq;

    // Adding elements to the front and back
    dq.push_back(10);  // {10}
    dq.push_front(20); // {20, 10}
    dq.push_back(30);  // {20, 10, 30}

    // Accessing elements
    cout << "Front: " << dq.front() << endl; // 20
    cout << "Back: " << dq.back() << endl;   // 30

    // Removing elements
    dq.pop_front(); // {10, 30}
    dq.pop_back();  // {10}

    // Check size
    cout << "Size: " << dq.size() << endl; // 1

    deque<int> dq = {1, 2, 3, 4, 5};
    cout << dq[2];    // 3 (no bounds checking)
    cout << dq.at(2); // 3 (with bounds checking)

    deque<int> dq = {1, 2, 3};
    dq.insert(dq.begin() + 1, 5); // {1, 5, 2, 3}
    dq.erase(dq.begin() + 2);     // {1, 5, 3}

    deque<int> dq = {1, 2, 3};
    cout << dq.empty(); // 0 (false)
    dq.resize(5);       // {1, 2, 3, 0, 0}

    return 0;
}