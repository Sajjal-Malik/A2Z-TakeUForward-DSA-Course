#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Empty set of integers
    set<int> s1;

    // Initialization with values
    set<int> s2 = {5, 2, 8, 1, 3};

    // Set will store: {1, 2, 3, 5, 8} (sorted and unique)

    // Set with custom comparator (descending order)
    set<int, greater<int>> s3 = {5, 2, 8, 1, 3};
    // Will store: {8, 5, 3, 2, 1}

    set<int> s;
    s.insert(10);         // Insert single element
    s.insert({5, 15, 7}); // Insert multiple elements

    s.erase(10); // Erase by value
    auto it = s.find(5);
    if (it != s.end())
    {
        s.erase(it); // Erase by iterator
    }

    s.erase(s.begin(), s.find(7)); // Erase range

    // find() - returns iterator to element if found, else end()
    auto it = s.find(5);
    if (it != s.end())
    {
        cout << "Found: " << *it << endl;
    }

    // count() - returns 1 if present, 0 otherwise (since sets have unique elements)
    if (s.count(5))
    {
        cout << "5 is present" << endl;
    }

    // lower_bound() - returns iterator to first element >= value
    auto lb = s.lower_bound(6);

    // upper_bound() - returns iterator to first element > value
    auto ub = s.upper_bound(6);

    cout << "Size: " << s.size() << endl;
    cout << "Empty: " << s.empty() << endl;
    s.clear(); // Remove all elements

    // Using iterators
    for (auto it = s.begin(); it != s.end(); ++it)
    {
        cout << *it << " ";
    }

    // Range-based for loop
    for (int x : s)
    {
        cout << x << " ";
    }

    auto start = s.lower_bound(3);
    auto end = s.upper_bound(7);
    for (auto it = start; it != end; ++it)
    {
        cout << *it << " "; // Prints elements between 3 and 7
    }

    if (!s.empty())
    {
        int min = *s.begin();  // First element is smallest
        int max = *s.rbegin(); // Last element is largest
    }
    return 0;
}