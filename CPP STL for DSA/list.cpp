#include <bits/stdc++.h>
using namespace std;

int main() {
    // Creating a list
    list<int> myList = {1, 2, 3, 4, 5};
    
    // Adding elements
    myList.push_back(6);      // Add to end
    myList.push_front(0);     // Add to beginning
    
    // Inserting elements
    auto it = myList.begin();
    advance(it, 3);      // Move iterator to position 3
    myList.insert(it, 10);    // Insert 10 at position 3
    
    // Removing elements
    myList.pop_back();        // Remove from end
    myList.pop_front();       // Remove from beginning
    myList.erase(it);         // Remove element at iterator position
    
    // Accessing elements
    cout << "Front: " << myList.front() << endl;
    cout << "Back: " << myList.back() << endl;
    
    // Size operations
    cout << "Size: " << myList.size() << endl;
    cout << "Empty: " << (myList.empty() ? "Yes" : "No") << endl;
    
    // Iterating through the list
    for(int num : myList) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}