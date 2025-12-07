#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Creating a multimap
    multimap<int, string> studentGrades;

    // Inserting elements
    studentGrades.insert({101, "Alice"});
    studentGrades.insert({102, "Bob"});
    studentGrades.insert({101, "Charlie"}); // Duplicate key allowed
    studentGrades.insert({103, "David"});
    studentGrades.insert({102, "Eve"});

    // Displaying elements
    cout << "Student Grades:\n";
    for (const auto &pair : studentGrades)
    {
        cout << pair.first << ": " << pair.second << endl;
    }

    multimap<int, string> mm;

    // Using insert() - O(log n)
    mm.insert({1, "apple"});
    mm.insert(make_pair(2, "banana"));
    mm.insert(pair<int, string>(1, "apricot")); // Duplicate key

    // Using emplace() - more efficient for complex objects - O(log n)
    mm.emplace(3, "cherry");

    // Using find() - returns iterator to first match - O(log n)
    auto it = mm.find(1);
    if (it != mm.end())
    {
        cout << "Found: " << it->second << endl;
    }

    // Using equal_range() - get all values for a key - O(log n)
    auto range = mm.equal_range(1);
    for (auto it = range.first; it != range.second; ++it)
    {
        cout << it->second << endl;
    }

    // count() - number of elements with key - O(log n + k)
    cout << "Number of elements with key 1: " << mm.count(1) << endl;

    // erase() by key - removes all elements with key - O(log n + k)
    mm.erase(1);

    // erase() by iterator - O(1) amortized
    auto it = mm.find(2);
    if (it != mm.end())
    {
        mm.erase(it);
    }

    // erase() by range
    auto range = mm.equal_range(3);
    mm.erase(range.first, range.second);

    // clear() - removes all elements - O(n)
    mm.clear();

    // empty() - check if multimap is empty - O(1)
    if (mm.empty())
    {
        cout << "Multimap is empty" << endl;
    }

    // size() - number of elements - O(1)
    cout << "Size: " << mm.size() << endl;

    // lower_bound() - first element not less than key - O(log n)
    auto lb = mm.lower_bound(2);

    // upper_bound() - first element greater than key - O(log n)
    auto ub = mm.upper_bound(2);

    // Example: Print range [2, 4)
    for (auto it = mm.lower_bound(2); it != mm.upper_bound(4); ++it)
    {
        cout << it->first << ": " << it->second << endl;
    }

    return 0;
}