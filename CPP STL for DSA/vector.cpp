#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 1. Initialization
    vector<int> v1;                       // Empty vector
    vector<int> v2(5, 10);                // Vector with 5 elements, all 10
    vector<int> v3 = {1, 2, 3, 4, 5};     // Initializer list
    vector<int> v4(v3.begin(), v3.end()); // Copy from another vector

    // 2. Accessing elements
    cout << v3[2] << endl;      // 3 (no bounds checking)
    cout << v3.at(2) << endl;   // 3 (with bounds checking)
    cout << v3.front() << endl; // 1 (first element)
    cout << v3.back() << endl;  // 5 (last element)

    // 3. Modifiers
    v1.push_back(10);         // Add to end
    v1.pop_back();            // Remove from end
    v1.insert(v1.begin(), 5); // Insert at position
    v1.erase(v1.begin());     // Remove from position
    v1.clear();               // Remove all elements

    // 4. Capacity
    cout << v1.size() << endl;     // Number of elements
    cout << v1.capacity() << endl; // Storage currently allocated
    cout << v1.empty() << endl;    // True if empty
    v1.reserve(100);               // Reserve capacity

    // 5. Iterators (useful for algorithms)
    for (auto it = v3.begin(); it != v3.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    // Range-based for loop (C++11)
    for (int num : v3)
    {
        cout << num << " ";
    }
    cout << endl;

    // 6. Important algorithms (from <algorithm> header)
    sort(v3.begin(), v3.end());              // Sort ascending
    reverse(v3.begin(), v3.end());           // Reverse order
    auto it = find(v3.begin(), v3.end(), 3); // Find element
    if (it != v3.end())
    {
        cout << "Found at position: " << it - v3.begin() << endl;
    }

    vector<int> numbers = {10, 20, 30, 40, 50};

    // 1. Basic Forward Iteration
    cout << "Forward iteration: ";
    for (vector<int>::iterator it = numbers.begin(); it != numbers.end(); ++it)
    {
        cout << *it << " "; // Dereference iterator to get value
    }
    cout << endl;

    // 2. Using auto (C++11) - much cleaner!
    cout << "Using auto: ";
    for (auto it = numbers.begin(); it != numbers.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;

    // 3. Reverse Iteration
    cout << "Reverse iteration: ";
    for (auto rit = numbers.rbegin(); rit != numbers.rend(); ++rit)
    {
        cout << *rit << " ";
    }
    cout << endl;

    // 4. Iterator Arithmetic
    auto it = numbers.begin();
    cout << "Third element: " << *(it + 2) << endl; // 30

    // 5. Modifying values
    for (auto it = numbers.begin(); it != numbers.end(); ++it)
    {
        *it *= 2; // Double each value
    }

    cout << "After modification: ";
    for (int num : numbers)
    {
        cout << num << " "; // 20 40 60 80 100
    }
    cout << endl;

    // 6. Finding an element (using algorithm header)
    auto found = find(numbers.begin(), numbers.end(), 60);
    if (found != numbers.end())
    {
        cout << "Found 60 at position: " << (found - numbers.begin()) << endl;
    }

    // 7. Inserting using iterator
    numbers.insert(numbers.begin() + 2, 999);
    cout << "After insertion: ";
    for (int num : numbers)
    {
        cout << num << " "; // 20 40 999 60 80 100
    }
    cout << endl;

    // 8. Erasing using iterator
    numbers.erase(numbers.begin() + 3);
    cout << "After erasure: ";
    for (int num : numbers)
    {
        cout << num << " "; // 20 40 999 80 100
    }
    cout << endl;

    return 0;
}