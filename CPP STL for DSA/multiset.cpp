#include<bits/stdc++.h>
using namespace std;

int main() {
    // 1. Declaration and Initialization
    multiset<int> ms = {5, 2, 8, 2, 5, 1};

    // 2. Inserting elements
    ms.insert(3);
    ms.insert(7);
    ms.insert(2); // Duplicates are allowed

    // 3. Iterating through the multiset (sorted order)
    cout << "Multiset elements: ";
    for(int num : ms) {
        cout << num << " ";
    }
    cout << endl; // Output: 1 2 2 2 3 5 5 7 8

    // 4. Finding elements
    auto it = ms.find(5);
    if(it != ms.end()) {
        cout << "Element 5 found in multiset" << endl;
    }

    // 5. Counting occurrences of an element
    cout << "Number of 2s: " << ms.count(2) << endl; // Output: 3

    // 6. Erasing elements
    ms.erase(5); // Erases all occurrences of 5
    ms.erase(ms.find(2)); // Erases only one occurrence of 2

    // 7. Size and empty check
    cout << "Size: " << ms.size() << endl;
    cout << "Is empty? " << (ms.empty() ? "Yes" : "No") << endl;

    // 8. Lower and upper bound
    auto lb = ms.lower_bound(3); // First element not less than 3
    auto ub = ms.upper_bound(6); // First element greater than 6

    cout << "Elements in range [3,6]: ";
    for(auto i = lb; i != ub; ++i) {
        cout << *i << " ";
    }
    cout << endl;

    // 9. Equal range - returns a pair of iterators
    auto range = ms.equal_range(2);
    cout << "Range of 2s: ";
    for(auto i = range.first; i != range.second; ++i) {
        cout << *i << " ";
    }
    cout << endl;

    // 10. Clearing the multiset
    ms.clear();

    return 0;
}